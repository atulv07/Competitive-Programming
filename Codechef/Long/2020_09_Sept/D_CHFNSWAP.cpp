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
		ll sum = (n * (n + 1)) / 2;
		if(n == 0 || n == 1 || n == 2 || sum % 2 != 0) cout << 0 << "\n";
		else {
			ll idx = (sqrtl(4 * sum + 1) - 1) / 2;
			ll ss = (idx * (idx + 1)) / 2;
			ll ans = (n - idx);
			if(sum / 2 == ss) ans += ((n - idx) * (n - idx - 1)) / 2 + (idx * (idx - 1)) / 2;
			cout << ans << "\n";
		}
	}
	return 0;
}
