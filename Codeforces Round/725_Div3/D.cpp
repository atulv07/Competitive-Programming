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

vector<ll> sieve(ll n) {
	ll *arr = new ll[n + 1]();
	vector<ll> vect;
	for (ll i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			vect.push_back(i);
			for(ll j = 2 * i; j <= n; j += i) {
				arr[j] = 1;
			}
		}
	}
	return vect;
}

vector<ll> primes = sieve(36123);

ll steps(ll a) {
	ll cnt = 0;
	for(int i : primes) {
		if(i > a) break;
		while(a % i == 0) {
			cnt += 1;
			a /= i;
		}
	}
	if(a > 1) cnt += 1;
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, a, b, k;
	cin >> t;
	while(t--) {
		cin >> a >> b >> k;
		if(a == b) {
			if(k == 1) cout << "NO\n";
			else {
				ll sa = steps(a);
				if(2 * sa >= k) cout << "YES\n";
				else cout << "NO\n";
			}
		}
		else if(a % b == 0 || b % a == 0) {
			if(b % a == 0) swap(a, b);
			ll sa = steps(a);
			ll sb = steps(b);
			if(sa + sb >= k) cout << "YES\n";
			else cout << "NO\n";
		}
		else if(k == 1) cout << "NO\n";
		else {
			ll sa = steps(a);
			ll sb = steps(b);
			if(sa + sb >= k) cout << "YES\n";
			else cout <<"NO\n";
		}
	}
	return 0;
}