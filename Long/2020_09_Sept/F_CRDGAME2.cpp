#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007

ll myPow(ll a, ll b) {
	ll res = 1;
	while(b) {
		if(b & 1) {
			res *= a;
			res %= mod;
		}
		b /= 2;
		a *= a;
		a %= mod;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<ll> arr(n);
		ll maxx = 0;
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
			maxx = max(arr[i], maxx);
		}
		if(n == 1) {
			cout << "2\n";
			continue;
		}
		ll maxCnt = 0;
		for(ll i = 0; i < n; i++) {
			if(maxx == arr[i]) maxCnt += 1;
		}
		ll ans = myPow(2, n);
		if(maxCnt % 2 == 0) {
			ll sub = 1;
			ll x = min(maxCnt / 2, maxCnt - maxCnt / 2);
			for(int i = 0; i < x; i++) {
				sub *= (n - i);
				sub %= mod;
				sub *= myPow(i + 1, mod - 2);
				sub %= mod;
			}
			ans -= (sub * myPow(2, n - maxCnt)) % mod;
			if(ans < 0) ans = (ans + mod) % mod;
		}
		cout << ans << "\n";
	}
	return 0;
}