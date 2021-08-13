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

vector<vector<int>> adjList;
vector<int> parent, level;
vector<bool> visited;
int n;

void dfs(int v, int par) {
	if(par == 0)
		level[v] = 1;
	else
		level[v] = level[par] + 1;
	parent[v] = par;
	for(int child: adjList[v]) {
		if(child != par)
			dfs(child, v);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, u, v, q, k;
	cin >> t;
	while(t--) {
		cin >> n;
		adjList.resize(n + 1);
		level.resize(n + 1);
		parent.resize(n + 1);
		for(int i = 0; i < n - 1; i++) {
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
		}
		dfs(1, 0);
		cin >> q;
		for(int i = 0; i < q; i++) {
			cin >> k;
			int maxLevel = 0;
			int nodeWithMaxLevel = 0;
			vector<int> qvs(k);
			for(int j = 0; j < k; j++) {
				cin >> qvs[j];
				if(level[qvs[j]] > maxLevel) {
					maxLevel = level[qvs[j]];
					nodeWithMaxLevel = qvs[j];
				}
			}
			visited.resize(n + 1, false);
			bool possible = true;
			visited[nodeWithMaxLevel] = true;
			while(parent[nodeWithMaxLevel] != 0) {
				nodeWithMaxLevel = parent[nodeWithMaxLevel];
				visited[nodeWithMaxLevel] = true;
			}
			maxLevel = 0;
			nodeWithMaxLevel = 0;
			for(int v: qvs) {
				if(!visited[v] && level[v] > maxLevel) {
					maxLevel = level[v];
					nodeWithMaxLevel = v;
				}
			}
			if(nodeWithMaxLevel != 0) {
				while(!visited[nodeWithMaxLevel]) {
					visited[nodeWithMaxLevel] = true;
					nodeWithMaxLevel = parent[nodeWithMaxLevel];
				}
				for(int v: qvs) {
					if(!visited[v] || level[nodeWithMaxLevel] > level[v])
						possible = false;
				}
			}
			cout << (possible ? "YES\n":"NO\n");
			visited.clear();
		}
		adjList.clear();
		level.clear();
		parent.clear();
	}
	return 0;
}