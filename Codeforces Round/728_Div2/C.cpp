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
		vector<ll> arr(n);
		for(ll i = 0; i < n; i++) cin >> arr[i];
		sort(all(arr));
		ll ans = arr[n - 1], sum = 0;
		for(ll i = 0; i < n; i++) {
			ans -= (i * arr[i]) - sum;
			sum += arr[i];
		}
		cout << ans << "\n";
	}
	return 0;
}