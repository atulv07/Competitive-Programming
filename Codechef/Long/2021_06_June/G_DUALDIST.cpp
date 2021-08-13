#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

ll gcd(ll a, ll b) {
	if (b > a) return gcd(b, a);
	if (b == 0) return a;
	return gcd(b, a % b);
}

vector<ll> sieve(ll n) {
	ll *arr = new ll[n + 1]();
	vector<ll> vect;
	for (ll i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			vect.push_back(i);
			for(ll j = 2 * i; j <= n; j += i) {
				arr[j] = 1;
			}
		}
	}
	return vect;
}

struct hashPair {
	template <class T1, class T2> size_t operator()(const pair<T1, T2>& p) const{
		return hash<T1>{}(p.first) ^ hash<T2>{}(p.second);
	}
};

vector<vector<ll>> adjList;
vector<ll> score, parent, nodes, total, depth;
unordered_map<pair<ll, ll>, ll, hashPair> countDP, childDP;
vector<vector<ll>> parentDP;

void dfs1(ll curr, ll p, ll d) {
	nodes[curr] = 1;
	parent[curr] = p;
	depth[curr] = d;
	for(ll i = 0; i < adjList[curr].size(); i++) {
		ll child = adjList[curr][i];
		if(child == p) continue;
		dfs1(child, curr, d + 1);
		score[curr] += score[child] + nodes[child];
		nodes[curr] += nodes[child];
	}
}

void dfs2(ll curr, ll p, ll n) {
	total[curr] = total[p] + n - 2 * nodes[curr];
	for(ll i = 0; i < adjList[curr].size(); i++) {
		ll child = adjList[curr][i];
		if(child == p) continue;
		dfs2(child, curr, n);
		countDP[mp(curr, child)] = score[child];
		countDP[mp(child, curr)] = total[curr] - (score[child] + nodes[child]);
		childDP[mp(curr, child)] = nodes[child];
	}
	childDP[mp(curr, p)] = n - nodes[curr];
}

void travUp(ll &u, ll dist) {
	for(ll i = 20; i >= 0; i--) {
		if((1 << i) <= dist) {
			u = parentDP[u][i];
			dist -= (1 << i);
		}
	}
}

ll LCA(ll a, ll b) {
	if(depth[a] > depth[b]) travUp(a, depth[a] - depth[b]);
	if(depth[a] < depth[b]) travUp(b, depth[b] - depth[a]);
	if(a != b) {
		for(ll i = 19; i >= 0; i--) {
			if(parentDP[a][i] != parentDP[b][i] && parentDP[a][i] != 0) {
				a = parentDP[a][i];
				b = parentDP[b][i];
			}
		}
		a = parentDP[a][0];
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, n, q, u, v;
	cin >> t;
	while(t--) {
		cin >> n >> q;
		adjList.resize(n + 1);
		for(ll i = 1; i < n; i++) {
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
		}

		score.resize(n + 1, 0), parent.resize(n + 1, 0), nodes.resize(n + 1, 0), total.resize(n + 1, 0), depth.resize(n + 1, 0);
		dfs1(1, 0, 1);
		total[0] = score[1] + nodes[1];
		dfs2(1, 0, n);

		parentDP.resize(n + 1, vector<ll> (20, 0));
		for(ll i = 1; i <= n; i++) parentDP[i][0] = parent[i];
		for(ll j = 1; j < 20; j++) {
			for(ll i = 1; i <= n; i++) parentDP[i][j] = parentDP[parentDP[i][j - 1]][j - 1];
		}
		while(q--) {
			cin >> u >> v;
			if(depth[u] < depth[v]) swap(u, v);
			ll lca = LCA(u, v);
			ll d = abs(depth[lca] - depth[u]) + abs(depth[lca] - depth[v]);
			ll utravel = (d - 1) / 2;
			ll utemp = u;
			travUp(utemp, utravel);
			ll vtravel = d - 1 - utravel;
			ll vtemp = v;
			if(utemp != lca) vtemp = parentDP[utemp][0];
			else travUp(vtemp, vtravel);
			ll ansu = total[u] - (utravel + 1) * childDP[{utemp, vtemp}] - countDP[{utemp, vtemp}];
			ll ansv = total[v] - (vtravel + 1) * childDP[{vtemp, utemp}] - countDP[{vtemp, utemp}];
			cout << ansu + ansv << "\n";
		}
		adjList.clear();
		score.clear(), parent.clear(), nodes.clear(), total.clear(), depth.clear();
		countDP.clear(), childDP.clear();
		parentDP.clear();
	}
	return 0;
}