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

	ll t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<ll> arr(n);
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		ll minDiff = INT_MAX;
		for(ll i = 0; i < n - k + 1; i++) {
			minDiff = min(arr[i + k - 1] - arr[i], minDiff);
		}
		cout << minDiff << "\n";
	}
	return 0;
}