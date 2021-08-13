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

	ll t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<ll> odd;
		vector<ll> even;
		for(ll i = 0; i < n; i++) {
			cin >> a;
			if(a % 2 == 0) even.pb(a);
			else odd.pb(a);
		}
		for(ll i = 0; i < even.size(); i++) {
			cout << even[i] << " ";
		}
		for(ll i = 0; i < odd.size(); i++) {
			cout << odd[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}