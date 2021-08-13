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

	ll t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<ll> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.pb(a);
		}
		sort(arr.begin(), arr.end());
		ll ans1 = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5];
		ll ans2 = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[0] * arr[1];
		ll ans3 = arr[n - 1] * arr[0] * arr[1] * arr[2] * arr[3];
		cout << max(ans1, max(ans2, ans3)) << "\n";
	}
	return 0;
}