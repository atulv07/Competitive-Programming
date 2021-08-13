#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, a, x, p, k;
	cin >> t;
	while(t--) {
		cin >> n >> x >> p >> k;
		int big = 0;
		int small = 0;
		int eq = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a > x) big += 1;
			else if(a < x) small += 1;
			else eq += 1;
		}
		if(p <= small || p > small + eq) {
			if(k == p) {
				if(p <= small) 
					cout << small - p + 1 << "\n";
				else 
					cout << p - (small + eq) << "\n";
			}
			else if(k < p) {
				if(p <= small) 
					cout << small - p + 1 << "\n";
				else 
					cout << -1 << "\n";
			}
			else if(k > p) {
				if(p <= small) 
					cout << -1 << "\n";
				else 
					cout << p - (small + eq) << "\n";
			}
		}
		else {
			cout << 0 << "\n";
		}
	}
	return 0;
}