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

	ll n, k, x;
	cin >> n >> k >> x;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(all(arr));
	ll numSets = 1;
	vector<ll> diff;
	for(ll i = 1; i < n; i++) {
		if(arr[i] - arr[i - 1] > x) {
			numSets += 1;
			diff.pb(arr[i] - arr[i - 1]);
		}
	}
	sort(all(diff));
	ll i = 0;
	while(i < diff.size() && k > 0) {
		ll req = diff[i] / x;
		if(diff[i] % x == 0) req -= 1;
		if(k - req >= 0) {
			k -= req;
			numSets -= 1;
			i += 1;
		}
		else k = 0;
	}
	cout << numSets;
	return 0;
}