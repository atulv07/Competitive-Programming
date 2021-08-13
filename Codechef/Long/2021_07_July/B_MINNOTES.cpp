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

ll gcd(ll a, ll b) {
	if(b > a) gcd(b, a);
	if (b == 0) return a;
	return gcd(b, a % b);
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
		vector<ll> arr(n + 1);
		for(ll i = 1; i <= n; i++)
			cin >> arr[i];

		vector<ll> sGCD(n + 1), sSum(n + 1);
		sGCD[n] = arr[n];
		sSum[n] = 0;
		for(ll i = n - 1; i >= 1; i--) {
			sGCD[i] = gcd(sGCD[i + 1], arr[i + 1]);
			sSum[i] = sSum[i + 1] + arr[i + 1];
		}
		ll pSum = arr[1];
		ll pGCD = arr[1];
		ll minCards = sSum[1] / sGCD[1];
		for(ll i = 2; i < n; i++) {
			ll curGCD = gcd(pGCD, sGCD[i]);
			ll curSum = pSum + sSum[i];
			minCards = min(minCards, curSum / curGCD);
			pSum += arr[i];
			pGCD = gcd(pGCD, arr[i]);
		}
		minCards = min(minCards, pSum / pGCD);
		cout << minCards + 1 << "\n";
	}
	return 0;
}