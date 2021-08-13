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

inline ll POW(ll base, ll power, ll modulo) {
	base %= modulo;
	if (base < 0) base += modulo;
	ll x = base, cnt = power, ans = 1;
	while(cnt) {
		if(cnt & 1) ans = (ans * x) % modulo;
		x = (x * x) % modulo;
		cnt >>= 1;
	}
	return ans;
}

ll MOD = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		ll a = POW(2, n, MOD) - 1;
		cout << POW(a, m, MOD) << "\n";
	}
	return 0;
}