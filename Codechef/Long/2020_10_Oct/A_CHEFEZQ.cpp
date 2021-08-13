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

	ll t, n, k, a;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ll q = 0;
		ll day = 0;
		for(ll i = 1; i <= n; i++) {
			cin >> a;
			q += a;
			if(q >= k) q -= k;
			else {
				q = 0;
				if(day == 0) day = i;
			}
		}
		if(day == 0) day = n + q / k + 1;
		cout << day << "\n";
	}
	return 0;
}