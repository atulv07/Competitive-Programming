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

	ll n, m, a;
	cin >> n >> m;
	ll minA = LONG_MAX;
	ll AI = 0;
	for(ll i = 0; i < n; i++) {
		cin >> a;
		if(minA > a) {
			minA = a;
			AI = i;
		}
	}
	ll maxB = LONG_MIN;
	ll BI = 0;
	for(ll i = 0; i < m; i++) {
		cin >> a;
		if(maxB < a) {
			maxB = a;
			BI = i;
		}
	}
	for(ll i = 0; i < m; i++) {
		cout << AI << " " << i <<  "\n";
	}
	for(ll i = 0; i < n; i++) {
		if(i != AI) {
			cout << i << " " << BI << "\n";
		}
	}
	return 0;
}