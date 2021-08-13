#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int parent[1005];
int cnt;

void make_set(int v) {
	parent[v] = v;
}

int find_set(int v) {
	if(v == parent[v]) return v;
	return find_set(parent[v]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if(a != b) {
		parent[b] = a;
		cnt -= 1;
	}
}

int main(){
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
		for(int i = 0; i < n; i++) {
			make_set(i);
		}
		cnt = n;
		for(int i = 0; i < m; i++) {
			cin >> a >> b;
			union_sets(a, b);
		}
		cout << cnt << "\n";
	}
	return 0;
}