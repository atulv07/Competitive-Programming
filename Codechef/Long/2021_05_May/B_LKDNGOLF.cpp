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

	ll t, n, x, k;
	cin >> t;
	while(t--) {
		cin >> n >> x >> k;
		bool girega = false;
		if(x % k == 0 || (n + 1 - x) % k == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}