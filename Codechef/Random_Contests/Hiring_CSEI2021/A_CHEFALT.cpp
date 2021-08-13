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

	ll t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		ll sumO = 0;
		ll sumE = 0;
		for(ll i = 0; i < n; i++) {
			cin >> a;
			if(i % 2 == 0) sumE += a;
			else sumO += a;
		}
		cout << max(sumO, sumE) << "\n";
	}
	return 0;
}