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

struct edge {
	int src, dest, weight;
};

int v, e;
vector<edge> allEdges;
vector<int> parent;

bool myC(edge a, edge b) {
	return a.weight < b.weight;
}

int find(int i) {
	while(parent[i] != i)
		i = parent[i];
	return i;
}

void combine(int i, int j) {
	int a = find(i);
	int b = find(j);
	parent[a] = b;
}

void MST_kruskal() {
	parent.resize(v);
	for(int i = 0; i < v; i++) {
		parent[i] = i;
	} 
	sort(allEdges.begin(), allEdges.end(), myC);
	int minC = 0;
	int edgeC = 0;
	for(int i = 0; i < e && edgeC < v - 1; i++) {
		int s = allEdges[i].src;
		int e = allEdges[i].dest;
		int w = allEdges[i].weight;
		// if no cycle is formed on adding the edge with minimum weight
		// add the edge to the MST
		if(find(s) != find(e)) {
			edgeC++;
			combine(s, e);
			minC += w;
			cout << s << " " << e << " " << w << "\n";
		}
	}
	cout << minC << "\n";
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
	// nodes are from 0 to v - 1
	allEdges.resize(e);
	// weighted graph
	for(int i = 0; i < e; i++) {
		cin >> allEdges[i].src >> allEdges[i].dest >> allEdges[i].weight;
	}
	MST_kruskal();
	return 0;
}



// Input
// 5 11
// 0 1 5
// 0 2 1
// 0 4 10
// 1 2 2
// 1 4 3
// 2 4 8
// 2 3 9
// 2 5 1
// 3 4 7
// 3 5 4
// 4 5 6


// Output
// 0 2 1
// 2 5 1
// 1 2 2
// 1 4 3
// 3 5 4
// 11
