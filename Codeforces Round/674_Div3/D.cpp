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
	unordered_map<ll, ll> prevSum;
	ll sum = 0;
	for(ll i = 0; i < n; i++) {
		sum += arr[i];
		if(sum == 0 || (prevSum.find(sum) != prevSum.end())) {
			ans += 1;
			prevSum.clear();
			sum = arr[i];
		}
		prevSum[sum] = 1;
	}
	cout << ans << "\n";
	return 0;
}