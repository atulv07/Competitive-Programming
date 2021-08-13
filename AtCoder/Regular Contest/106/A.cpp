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
	for(ll i = 3, a = 1; i <= n; i *= 3, a++) {
		for(ll j = 5, b = 1; j <= n; j *= 5, b++) {
			if(i + j == n) {
				cout << a << " " << b;
				return 0;
			}
		}
	}
	cout << "-1";
	return 0;
}