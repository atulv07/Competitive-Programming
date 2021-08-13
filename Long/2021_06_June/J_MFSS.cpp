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

		ll ans = 0;
		unordered_map<string, pair<ll, ll>> um;
		for(ll i = 0; i < n; i++) {
			ll sum = 0;
			string s = "";
			for(ll j = i; j < n; j++) {
				sum += arr[j];
				s += " " + to_string(arr[j]);
				if(um.find(s) == um.end()) {
					um.insert(mp(s, mp(sum, 1)));
				}
				else {
					um[s].second += 1;
				}
			}
		}
		ll maxSum = INT_MIN;
		for(auto x : um) {
			maxSum = max(maxSum, x.second.first * x.second.second);
		}
		cout << maxSum << "\n";
	}
	return 0;
}