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

void addEdge(vector<int> adj[], int u, int v) {
	adj[u].pb(v);
	adj[v].pb(u);
}

void BFS(vector<int> adj[], int s, int v) {
	vector<bool> visited(v, false);
	visited[s] = true;
	queue<int> q;
	q.push(s);
	while(!q.empty()) {
		s = q.front();
		cout << s << " ";
		q.pop();
		for(int i = 0; i < adj[s].size(); i++) {
			if(!visited[adj[s][i]]) {
				q.push(adj[s][i]);
				visited[adj[s][i]] = true;
			}
		}
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

	int v = 4;
	vector<int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 0);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 3);

	BFS(adj, 0, v);
	return 0;
}