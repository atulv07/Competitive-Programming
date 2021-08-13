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

// To find the shortest path from one vertex to another.
// Doesnt work for graphs with negative weight edges.

int n, e;
vector<vector<int>> graph;
vector<int> distFromRoot;
vector<bool> vis;

int minDistVertex() {
	int minD = INT_MAX;
	int minDVertex = 0;
	for(int v = 0; v < n; v++) {
		if(!vis[v] && distFromRoot[v] < minD)
			minD = distFromRoot[v], minDVertex = v;
	}
	return minDVertex;
}

void dijkstra() {
	distFromRoot.resize(n, INT_MAX);
	vis.resize(n, false);
	int src = 0;
	distFromRoot[src] = 0;
	vis[src] = true;
	// O(v2)
	// O(e logv) if we use adjacency list and minheap
	for(int i = 0; i < n - 1; i++) {
		int u = minDistVertex();
		vis[u] = true;
		for(int v = 0; v < n; v++) {
			if(!vis[v] && graph[u][v] && distFromRoot[u] != INT_MAX && distFromRoot[u] + graph[u][v] < distFromRoot[v])
				distFromRoot[v] = distFromRoot[u] + graph[u][v];
		}
	}
	for(int i = 0; i < n; i++)
		cout << i << " " << distFromRoot[i] << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a, b, w;
	cin >> n >> e;
	graph.resize(n, vector<int>(n, 0));
	for(int i = 0; i < e; i++) {
		cin >> a >> b >> w;
		graph[a][b] = w;
		graph[b][a] = w;
	}
	dijkstra();
	return 0;
}


// Input
// 5 7
// 0 1 4
// 0 2 8
// 1 2 2
// 1 3 5
// 2 3 5
// 2 4 9
// 3 4 4


// Output
// 0 0
// 1 4
// 2 6
// 3 9
// 4 13
