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

ll binpow(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<ll> A;
	A.pb(0);
	vector<ll> prefSum;
	prefSum.pb(0);
	for(int i = 1; i <= 100000; i++) {
		string s = to_string(i);
		string rev = s.substr(0, s.size() - 1);
		reverse(all(rev));
		A.pb(stoll(s + rev));
		prefSum.pb(prefSum[prefSum.size() - 1] + A[A.size() - 1]);
	}
	ll q, l, r;
	cin >> q;
	for(ll i = 0; i < q; i++) {
		cin >> l >> r;
		cout << binpow(A[l], (prefSum[r] - prefSum[l]), 1000000007) << "\n";
	}
	return 0;
}