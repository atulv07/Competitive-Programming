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

vector<int> semis;

bool isprime(int n) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) 
			return false;
	}
	return true;
}

void getSemiPrimes() {
	for(int i = 2; i <= 200; i++) {
		for(int j = i + 1; j <= 200; j++) {
			if(isprime(i) && isprime(j)) {
				semis.pb(i * j);
			}
		}
	}
}

string solve(int n) {
	for(auto i : semis) {
		for(auto j : semis) {
			if(i + j == n) return "YES\n";
		}
	}
	return "NO\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n;
	cin >> t;
	getSemiPrimes();
	while(t--) {
		cin >> n;
		cout << solve(n);
	}
	return 0;
}