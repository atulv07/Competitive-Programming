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
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		ll mx = INT_MIN;
		for(ll i = 0; i < n - 1; i++) {
			mx = max(arr[i] * arr[i + 1], mx);
		}
		cout << mx << "\n";
	}
	return 0;
}