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

	ll t, n, x, y;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<pair<ll, ll>> miner;
		vector<pair<ll, ll>> mine;
		for(ll i = 0; i < 2 * n; i++) {
			cin >> x >> y;
			if(x == 0) miner.pb(mp(abs(x), abs(y)));
			else if(y == 0) mine.pb(mp(abs(x), abs(y)));
		}
		sort(all(miner));
		sort(all(mine));
		double ans = 0;
		for(int i = 0; i < n; i++) {
			ans += (pow(pow(miner[i].first - mine[i].first, 2) + pow(miner[i].second - mine[i].second, 2), 0.5));
		}
		cout << setprecision(20) << ans << "\n";
	}
	return 0;
}