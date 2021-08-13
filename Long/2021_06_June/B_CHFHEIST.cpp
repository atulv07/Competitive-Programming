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

	ll t, D, d, P, Q;
	cin >> t;
	while(t--) {
		cin >> D >> d >> P >> Q;
		ll money = (P * (D / d) * d);
		money += d * (((D / d) * (D / d - 1)) / 2) * Q;
		money += ((P + (D / d) * Q) * (D % d));
		cout << money << "\n";
	}
	return 0;
}