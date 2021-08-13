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

	ll t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if(n == 1) cout << "1\n";
		else if((n & (n - 1)) == 0) cout << -1 << "\n";
		else {
			cout << 2 << " " << 3 << " " << 1 << " ";
			ll i = 8;
			ll last = 3;
			while(i < n) {
				ll start = i / 2;
				cout << start + 1 << " " << start << " ";
				for(ll j = start + 2; j < i; j++) {
					cout << j << " ";
				}
				last = i - 1;
				i *= 2;
			}
			if(last < n) {
				cout << last + 2 << " " << last + 1 << " ";
			}
			for(i = last + 3; i <= n; i++) {
				cout << i << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}