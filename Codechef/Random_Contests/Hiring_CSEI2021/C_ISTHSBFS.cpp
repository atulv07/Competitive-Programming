#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int n;
vector<bool> isPortal;
vector<vector<int>> arr(100009);
vector<int> dist(100009, -1);

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, m, k, a, b, q;
	cin >> t;
	while(t--) {
		cin >> n >> m >> k;
		for(int i = 0; i < m; i++) {
			cin >> a >> b;
			arr[a - 1].pb(b - 1);
			arr[b - 1].pb(a - 1);
		}
		for(int i = 0; i < n; i++) {
			isPortal.pb(false);
		}
		for(int i = 0; i < k; i++) {
			cin >> a;
			isPortal[a - 1] = true;
			dist[a - 1] = 0;
		}

		
		cin >> q;
		for(int i = 0; i < q; i++) {
			cin >> a;
			cout << dist[a - 1] << "\n";
		}
	}
	return 0;
}