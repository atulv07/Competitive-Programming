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
 
	ll q, n, k, t;
	cin >> q;
	while(q--) {
		cin >> n >> k;
		vector<ll> a(k);
		vector<ll> temp(n + 2, LONG_MAX);
		for(ll i = 0; i < k; i++)
			cin >> a[i];
		for(ll i = 0; i < k; i++) {
			cin >> t;
			temp[a[i]] = t;
		}
		for(ll i = n; i >= 1; i--)
			temp[i] = min(temp[i], temp[i + 1] + 1);
		for(ll i = 1; i <= n; i++)
			temp[i] = min(temp[i], temp[i - 1] + 1), cout << temp[i] << " ";
		cout << "\n";
	}
	return 0;
}