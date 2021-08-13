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

vector<vector<pair<int, int>>> adjList;

int minKeyIdx(int n, vector<int> key, vector<bool> selected) {
	int mn = INT_MAX;
	int mnIdx = 0;
	for(int i = 1; i <= n; i++) {
		if(selected[i] == false && key[i] < mn)
			mn = key[i], mnIdx = i;
	}
	return mnIdx;
}

void printMST(vector<int> parent) {
	for(int i = 2; i < parent.size(); i++) {
		cout << i << "-" << parent[i] << " ";
		for(pair<int, int> child : adjList[i]) {
			if(child.first == parent[i])
				cout << child.second << "\n";
		}
	}
}

void MST_prim(int n) {
	vector<int> parent(n + 1);
	// each vertex is assigned inf key value
	vector<int> key(n + 1, INT_MAX);
	vector<bool> selected(n + 1, false);

	// set key of any 1 idex as 0
	key[1] = 0;
	parent[1] = -1;
	for(int cnt = 0; cnt < n - 1; cnt++) {
		// pick vertex not in the selected set and with min key
		int u = minKeyIdx(n, key, selected);
		// include it to the set
		selected[u] = true;
		// update key value of all adj not included nodes of u
		for(pair<int, int> child: adjList[u]) {
			if(selected[child.first] == false && key[child.first] > child.second) {
				parent[child.first] = u;
				key[child.first] = child.second;
			}
		}
	}
	printMST(parent);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, e, x, y, l;
	cin >> n >> e;
	// nodes are from 1 to n
	adjList.resize(n + 1);
	// weighted graph
	for(int i = 0; i < e; i++) {
		cin >> x >> y >> l;
		adjList[x].pb(mp(y, l));
		adjList[y].pb(mp(x, l));
	}
	MST_prim(n);
	return 0;
}

// Input
// 5 7
// 1 2 2
// 1 4 6
// 2 3 3
// 2 4 8
// 2 5 5
// 3 5 7
// 4 5 9

// Output
// 2-1 2
// 3-2 3
// 4-1 6
// 5-2 5
