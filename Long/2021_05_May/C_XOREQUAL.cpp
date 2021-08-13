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

inline ll POW(ll base, ll power, ll modulo) {
	base %= modulo;
	ll x = base, cnt = power, ans = 1;
	while(cnt) {
		if(cnt & 1) ans = (ans * x) % modulo;
		x = (x * x) % modulo;
		cnt >>= 1;
	}
	return ans;
}

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
		cout << (POW(2, n - 1, 1000000007)) << "\n";
	}
	return 0;
}