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

	ll n, q, x;
	cin >> n >> q;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(all(arr));
	for(ll i = 0; i < q; i++) {
		cin >> x;
		ll idx = lower_bound(all(arr), x) - arr.begin();
		if(idx == n) cout << "POSITIVE\n";
		else if(arr[idx] == x) cout << "0\n";
		else {
			ll pos = idx;
			ll neg = n - idx;
			if(neg % 2 == 0) cout << "POSITIVE\n";
			else cout << "NEGATIVE\n";
		}
	}
	return 0;
}