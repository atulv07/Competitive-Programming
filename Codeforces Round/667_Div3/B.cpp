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

	ll t, n, a, b, x, y;
	cin >> t;
	while(t--) {
		cin >> a >> b >> x >> y >> n;
		ll ansALLa = (a - min(a - x, n)) * (b - min(n - min(a - x, n), b - y));
		ll ansALLb = (b - min(b - y, n)) * (a - min(n - min(b - y, n), a - x));
		cout << min(ansALLb, ansALLa) << "\n";
	}
	return 0;
}