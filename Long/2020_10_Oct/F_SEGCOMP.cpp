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

	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ll ans = 0;
	for(ll i = 0; i < n; i++) {
		ll XOR = arr[i];
		ans += XOR;
		for(ll j = i + 1; j < n; j++) {
			XOR ^= arr[j];
			ans += XOR;
			ans %= 998244353;
			cout << ans << "\n";
		}
		ans %= 998244353;
	}
	cout << ans << "\n";
	return 0;
}