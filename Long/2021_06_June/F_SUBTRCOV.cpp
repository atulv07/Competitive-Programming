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

int maxPathLength, nodeFarthestFromRoot, length;
vector<vector<int>> adjList;
vector<bool> visited;
vector<int> DepN;

void dfs_GoFarthest(vector<vector<int>> &adjList, int src) {
	visited[src] = true;
	for(int i = 0; i < adjList[src].size(); i++) {
		if(!visited[adjList[src][i]]) {
			length += 1;
			dfs_GoFarthest(adjList, adjList[src][i]);
			length -= 1;
		}
	}
	if(length > maxPathLength) {
		maxPathLength = length;
		nodeFarthestFromRoot = src;
	}
}

void dfs(vector<int> &arr, int node, int p, int cur) {
	bool isL = true;
	int mx = 0;
	for(int i = 0; i < adjList[node].size(); i++) {
		int currNode = adjList[node][i];
		if(currNode != p) {
			isL = false;
			mx = max(mx, DepN[currNode]);
		}
	}
	if(isL) {
		arr.pb(cur);
		return;
	}
	int c = 0;
	for(int i = 0; i < adjList[node].size(); i++) {
		int currNode = adjList[node][i];
		if(currNode != p) {
			if(c == 0 && DepN[currNode] == mx) {
				dfs(arr, currNode, node, cur + 1);
				c++;
			}
			else dfs(arr, currNode, node, 1);
		}
	}
}

void calcDepNs(int node, int p) {
	bool isL = true;
	for(int i = 0; i < adjList[node].size(); i++) {
		int currNode = adjList[node][i];
		if(currNode != p) {
			isL = false;
			calcDepNs(currNode, node);
			DepN[node] = max(DepN[node], 1 + DepN[currNode]);
		}
	}
	if(isL) DepN[node] = 1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, k, u, v;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		adjList.resize(n + 1);
		for(int i = 1; i < n; i++) {
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
		}
		if(k == 1) cout << 1 << "\n";
		else {
			visited.resize(n + 1, false);
			length = 0;
			maxPathLength = 0;
			dfs_GoFarthest(adjList, 1);

			DepN.resize(n + 1, 0);
			calcDepNs(nodeFarthestFromRoot, 0);

			vector<int> arr;
			dfs(arr, nodeFarthestFromRoot, 0, 1);
			sort(arr.begin(), arr.end(), greater<>());
			int size = 1;
			int curK = 0;
			int i = 0;
			while(curK < k) {
				curK += arr[i];
				size++;
				i++;
			}
			cout << size << "\n";
		}
		adjList.clear();
		DepN.clear();
		visited.clear();
	}
	return 0;
}