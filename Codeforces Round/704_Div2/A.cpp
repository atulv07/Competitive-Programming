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

	ll t, p, a, b, c;
	cin >> t;
	while(t--) {
		cin >> p >> a >> b >> c;
		if(p % a == 0 || p % b == 0 || p % c == 0) cout << 0 << "\n";
		else cout << min(min(a - p % a, b - p % b), c - p % c) << "\n";
	}
	return 0;
}