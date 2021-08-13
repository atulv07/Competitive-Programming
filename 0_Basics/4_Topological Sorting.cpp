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

vector<bool> visited;

void addEdge(vector<int> adjList[], int u, int v) {
	adjList[u].pb(v);
}

void topologicalSortUtil(vector<int> adjList[], int v, stack<int> & stk) {
	visited[v] = true;
	for(int i = 0; i < adjList[v].size(); i++) {
		if(!visited[adjList[v][i]])
			topologicalSortUtil(adjList, adjList[v][i], stk);
	}
	stk.push(v);
}

void topologicalSort(vector<int> adjList[], int v) {
	stack<int> stk;
	visited.resize(v, false);
	for(int i = 0; i < v; i++) {
		if(!visited[i])
			topologicalSortUtil(adjList, i, stk);
	}
	while(!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}
	visited.clear();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int v = 6;
	vector<int> adjList[6];
	addEdge(adjList, 5, 2);
	addEdge(adjList, 5, 0);
	addEdge(adjList, 4, 0);
	addEdge(adjList, 4, 1);
	addEdge(adjList, 2, 3);
	addEdge(adjList, 3, 1);
	topologicalSort(adjList, 6);
	return 0;
}