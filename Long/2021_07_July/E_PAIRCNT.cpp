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

int n, LOG;
vector<vector<int>> adjList;
vector<vector<int>> memo;
vector<int> level;

void dfs(int v, int par) {
	memo[v][0] = par;
	for(int i = 1; i <= LOG; i++)
		memo[v][i] = memo[memo[v][i - 1]][i - 1];
	level[v] = level[par] + 1;
	for(int child: adjList[v]) {
		if(child != par)
			dfs(child, v);
	}
}

int LCA(int u, int v) {
	if(level[u] < level[v])
		swap(u, v);
	for(int i = LOG; i >= 0; i--) {
		if(level[u] - pow(2, i) >= level[v])
			u = memo[u][i];
	}
	if(u == v) return u;
	for(int i = LOG; i >= 0; i--) {
		if(memo[u][i] != memo[v][i]) {
			u = memo[u][i];
			v = memo[v][i];
		}
	}
	return memo[u][0];
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, q, u, v, k, d;
	cin >> t;
	while(t--) {
		cin >> n >> q;
		adjList.resize(n + 1);
		for(int i = 0; i < n - 1; i++) {
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
		}
		LOG = (int)ceil(log2(n));
		memo.resize(n + 1, vector<int>(LOG + 1, -1));
		level.resize(n + 1);
		level[1] = 0;
		dfs(1, 1);
		for(int i = 0; i < q; i++) {
			cin >> k >> d;
			vector<int> givenV(k);
			for(int j = 0; j < k; j++)
				cin >> givenV[j];
			int cnt = 0;
			for(int j1 = 0; j1 < k; j1++) {
				for(int j2 = j1 + 1; j2 < k; j2++) {
					int lca = LCA(givenV[j1], givenV[j2]);
					int dist = (level[givenV[j1]] - level[lca]) + (level[givenV[j2]] - level[lca]);
					if(dist == d)
						cnt++;
				}
			}
			givenV.clear();
			cout << cnt << "\n";
		}
		adjList.clear();
		memo.clear();
		level.clear();
	}
	return 0;
}