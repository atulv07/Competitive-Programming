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

// topological sort to remove non cycles
// BFS

vector<vector<int>> adjList;
vector<int> value;
vector<bool> vis;

void dfs(int v, bool many) {
	vis[v] = true;
	if(many) value[v] = -1;
	for(int child: adjList[v]) {
		if(many)
			value[child] = -1;
		else if(vis[child] && value[child] != -1)
			value[child]++;
		else
			dfs(child, many || (child == v));
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

	int t, n, m, a, b;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		adjList.resize(n + 1);
		value.resize(n + 1, 0);
		vis.resize(n + 1, false);
		bool many = false;
		for(int i = 0; i < m; i++) {
			cin >> a >> b;
			if(a == b && a == 1) many = true;
			adjList[a].pb(b);
		}
		value[1] = 1;
		dfs(1, many);
		for(int i = 1; i <= n; i++) {
			if(value[i] > 1) value[i] = 2;
			cout << value[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}