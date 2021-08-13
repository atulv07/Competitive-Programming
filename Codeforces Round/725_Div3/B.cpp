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
		ll sum = 0;
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum % n != 0) {
			cout << -1 << "\n";
			continue;
		}
		ll cnt = 0;
		for(ll i = 0; i < n; i++) {
			if(arr[i] > sum / n) {
				cnt += 1;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}