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

void topologicalSortKahn(vector<int> adjList[], int v) {
	vector<int> inDegree(v + 1, 0);
	for(int i = 1; i <= v; i++) {
		for(int j = 0; j < adjList[i].size(); j++) {
			inDegree[adjList[i][j]]++;
		}
	}

	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 1; i <= v; i++) {
		if(inDegree[i] == 0) pq.push(i);
	}
	vector<int> ans;
	while(!pq.empty()) {
		int u = pq.top();
		ans.pb(u);
		pq.pop();
		for(int child : adjList[u]) {
			inDegree[child]--;
			if(inDegree[child] == 0) pq.push(child);
		}
	}
	if(ans.size() != v) cout << "Sandro fails.";
	else {
		for(int node : ans) cout << node << " ";
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

	int n, m, x, y;
	cin >> n >> m;
	vector<int> adjList[n + 1];
	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		adjList[x].pb(y);
	}
	topologicalSortKahn(adjList, n);
	return 0;
}