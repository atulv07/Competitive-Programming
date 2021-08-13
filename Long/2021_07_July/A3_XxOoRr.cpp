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

	ll t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<ll> arr(n);
		ll mx = 0;
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
			mx = max(mx, arr[i]);
		}
		ll numBits = 0;
		while(mx) {
			numBits++;
			mx >>= 1;
		}
		ll ans = 0;
		for(ll bit = 1; bit <= numBits; bit++) {
			ll cnt = 0;
			for(ll i = 0; i < n; i++) {
				if(arr[i] & (1 << (bit - 1))) cnt++;
			}
			ans += (cnt / k) + ((cnt % k) ? 1 : 0);
		}
		cout << ans << "\n";
	}
	return 0;
}