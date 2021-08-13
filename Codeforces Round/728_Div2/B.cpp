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
		vector<pair<ll, ll>> arr(n);
		for(ll i = 1; i <= n; i++) {
			cin >> arr[i - 1].first;
			arr[i - 1].second = i;
		}
		sort(all(arr));
		ll cnt = 0;
		for(int i = 0; i < n && arr[i].first * arr[i].first <= 2 * n; i++) {
			for(int j = i + 1; j < n && arr[i].first * arr[j].first <= 2 * n; j++) {
				if(arr[i].first * arr[j].first == arr[i].second + arr[j].second) cnt += 1;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}