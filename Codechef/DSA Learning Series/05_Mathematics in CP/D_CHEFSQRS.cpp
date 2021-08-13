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

int main() {
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
		ll m = 1000000000;
		for(ll i = 1; i < sqrt(n); i++) {
			if(n % i == 0) {
				ll a = i, b = n / i;
				if(b - a != 0 && (b - a) % 2 == 0) {
					m = min(m, (b - a) / 2);
				}
			}
		}
		if(m == 1000000000) cout << "-1\n";
		else cout << m * m << "\n";
	}
	return 0;
}