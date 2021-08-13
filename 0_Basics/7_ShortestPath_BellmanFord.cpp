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

// Dijkstra doesn’t work for Graphs with negative weight edges
// Bellman-Ford works for such graphs
// Bellman-Ford is also simpler than Dijkstra and suites well for distributed systems
// But time complexity of Bellman-Ford is O(VE), which is more than Dijkstra.
// Bellman-Ford does not work with undirected graph with negative edges as it will be declared as negative cycle.

int v, e;
vector<vector<int>> edges;
vector<int> distFromRoot;

// O(ve)
void bellmanFord() {
	distFromRoot.resize(v, INT_MAX);
	distFromRoot[0] = 0;
	// A simple shortest path from src to any other
    // vertex can have at-most V - 1 edges
	for(int i = 0; i < v - 1; i++) {
		for(int j = 0; j < e; j++) {
			int u = edges[j][0];
			int v = edges[j][1];
			int w = edges[j][2];
			if(distFromRoot[u] != INT_MAX && distFromRoot[u] + w < distFromRoot[v]) {
				distFromRoot[v] = distFromRoot[u] + w;
			}
		}
	}

	// check for negative-weight cycles.
    // The above step guarantees shortest
    // distances if graph doesn't contain
    // negative weight cycle. If we get a
    // shorter path, then there is a cycle.
    for(int i = 0; i < e; i++) {
    	int u = edges[i][0];
    	int v = edges[i][1];
    	int w = edges[i][2];
    	if(distFromRoot[u] != INT_MAX && distFromRoot[u] + w < distFromRoot[v])
    		cout << "Graph contains negative weight cycle\n";
    }
    for(int i = 0; i < v; i++)
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

	cin >> v >> e;
	int a, b, w;
	for(int i = 0; i < e; i++) {
		cin >> a >> b >> w;
		edges.pb({a, b, w});
	}
	bellmanFord();
	return 0;
}

// Input
// 5 8
// 0 1 -1
// 0 2 4
// 1 2 3
// 1 3 2
// 1 4 2
// 3 2 5
// 3 1 1
// 4 3 -3

// Output
// 0 0
// 1 -1
// 2 2
// 3 -2
// 4 1
