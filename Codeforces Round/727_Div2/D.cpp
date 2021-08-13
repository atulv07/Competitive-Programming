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

bool myC(pair<ll, ll> a, pair<ll, ll> b) {
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin >> n;
	vector<pair<ll, ll>> arr(n);
	for(ll i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(all(arr), myC);
	ll l = 0;
	ll r = n - 1;
	ll total = 0;
	ll bought = 0;
	while(l <= r) {
		if(bought >= arr[l].second) {
			total += arr[l].first;
			bought += arr[l].first;
			arr[l].first = 0;
			l += 1;
		}
		else {
			ll buyR = min(arr[l].second - bought, arr[r].first);
			total += buyR * 2;
			bought += buyR;
			arr[r].first -= buyR;
			if(arr[r].first == 0) {
				r -= 1;
			}
		}
	}
	cout << total;
	return 0;
}