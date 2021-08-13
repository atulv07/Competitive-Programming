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

	ll t, n, x;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		vector<ll> c(n + 1);
		for(ll i = 1; i <= n; i++)
			cin >> c[i];
		vector<ll> t(n + 1);
		vector<ll> preSt(n + 1, 0);
		for(ll i = 1; i <= n - 1; i++) {
			cin >> t[i];
			preSt[i] = preSt[i - 1] + t[i];
		}
		if(x == 1) {
			ll src = n;
			while(c[src] == 0)
				src--;
			vector<pair<ll, ll>> timeToCnt;
			for(ll i = 1; i < src; i++) {
				if(c[i] > 0) {
					timeToCnt.pb(mp(preSt[src - 1] - preSt[i - 1], c[i]));
				}
			}
			sort(all(timeToCnt));
			ll time = 0;
			ll travelerIdx = 0;
			ll toDis = c[src];
			while(toDis) {
				time += toDis;
				toDis = 0;
				if(travelerIdx < timeToCnt.size()) {
					time = max(time, timeToCnt[travelerIdx].first);
					toDis += timeToCnt[travelerIdx].second;
					travelerIdx++;
				}
			}
			cout << time << "\n";
		}
		else cout << 0 << "\n";
	}
	return 0;
}