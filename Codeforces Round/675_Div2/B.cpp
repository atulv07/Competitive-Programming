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

	ll t, n, m, a;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vector<vector<ll>> arr(n);
		for(ll i = 0; i < n; i++) {
			for(ll j = 0; j < m; j++) {
				cin >> a;
				arr[i].pb(a);
			}
		}
		ll ans = 0;
		for(ll i = 0; i < (n + 1) / 2; i++) {
			for(ll j = 0; j < (m + 1) / 2; j++) {
				if(i == n - i - 1 && j == m - j - 1) continue;
				else if(i == n - i - 1) {
					ll sum = arr[i][j] + arr[i][m - j - 1];
					ll val = sum / 2;
					ans += min(abs(val - arr[i][j]) + abs(val - arr[i][m - j - 1]), abs(arr[i][j] - arr[i][m - j - 1]));
				}
				else if(j == m - j - 1) {
					ll sum = arr[i][j] + arr[n - i - 1][j];
					ll val = sum / 2;
					ans += min(abs(arr[i][j] - arr[n - i - 1][j]), abs(val - arr[i][j]) + abs(val - arr[n - i - 1][j]));
				}
				else {
					ll sum = arr[i][j] + arr[n - i - 1][j] + arr[n - i - 1][m - j - 1] + arr[i][m - j - 1];
					ll val = sum / 4;
					ll ans1 = abs(arr[i][j] - val) + abs(arr[n - i - 1][j] - val) + abs(arr[i][m - j - 1] - val) + abs(arr[n - i - 1][m - j - 1] - val);
					ll ans2 = abs(arr[n - i - 1][j] - arr[i][j]) + abs(arr[n - i - 1][j] - arr[i][m - j - 1]) + abs(arr[n - i - 1][j] - arr[n - i - 1][m - j - 1]);
					ll ans3 = abs(arr[n - i - 1][m - j - 1] - arr[n - i - 1][j]) + abs(arr[n - i - 1][m - j - 1] - arr[i][m - j - 1]) + abs(arr[i][j] - arr[n - i - 1][m - j - 1]);
					ll ans4 = abs(arr[i][m - j - 1] - arr[n - i - 1][j]) + abs(arr[i][j] - arr[i][m - j - 1]) + abs(arr[i][m - j - 1] - arr[n - i - 1][m - j - 1]);
					ll ans5 = abs(arr[i][j] - arr[n - i - 1][j]) + abs(arr[i][j] - arr[i][m - j - 1]) + abs(arr[i][j] - arr[n - i - 1][m - j - 1]);
					ans += min({ans1, ans2, ans3, ans4, ans5});
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}