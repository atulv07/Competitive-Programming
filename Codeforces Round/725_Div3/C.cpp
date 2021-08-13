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

	ll t, n, l, r;
	cin >> t;
	while(t--) {
		cin >> n >> l >> r;
		vector<ll> arr(n);
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(all(arr));
		ll ans = 0;
		for(int i = 0; i < n - 1; i++) {
			auto lower = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]);
			auto upper = upper_bound(lower, arr.end(), r - arr[i]);
			ans += upper - lower;
		}
		cout << ans << "\n";
	}
	return 0;
}