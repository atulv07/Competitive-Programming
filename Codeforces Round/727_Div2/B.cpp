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

	ll n, q, l, r;
	string s;
	cin >> n >> q;
	cin >> s;
	vector<ll> leng;
	leng.pb(0);
	ll curLen = 0;
	for(ll i = 0; i < n; i++) {
		curLen += (s[i] - 'a' + 1);
		leng.pb(curLen);
	}
	for(ll i = 0; i < q; i++) {
		cin >> l >> r;
		cout << leng[r] - leng[l - 1] << "\n";
	}
	return 0;
}