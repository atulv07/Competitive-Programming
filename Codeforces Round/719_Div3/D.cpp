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
		vector<ll> arrMidx(n);
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
			arrMidx[i] = arr[i] - i;
		}
		ll cnt = 0;
		unordered_map<ll, ll> um;
		for(ll i = 0; i < n; i++) {
			if(um.find(arrMidx[i]) == um.end()) {
				um.insert(mp(arrMidx[i], 1));
			}
			else {
				cnt += um[arrMidx[i]];
				um[arrMidx[i]]++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}