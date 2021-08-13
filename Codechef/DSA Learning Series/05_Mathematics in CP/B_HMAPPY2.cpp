#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

ll gcd(ll a, ll b) {
	if (b > a) return gcd(b, a);
	if (b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, n, a, b, k;
	cin >> t;
	while(t--) {
		cin >> n >> a >> b >> k;
		if((n / a) + (n / b) - (2 * (n / lcm(a, b))) >= k) cout << "Win\n";
		else cout << "Lose\n";
	}
	return 0;
}