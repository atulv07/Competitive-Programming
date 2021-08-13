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

	ll t, n, s;
	cin >> t;
	while(t--) {
		cin >> n >> s;
		ll tempN = n;
		ll digitSum = 0;
		while(tempN != 0) {
			digitSum += tempN % 10;
			tempN /= 10;
		}
		if(digitSum <= s) cout << 0 << "\n";
		else {
			ostringstream str1;str1 << n;
			string ns = str1.str();
			ll i = 0;
			ll sum = 0;
			while(i < ns.size() && sum + (ns[i] - '0') < s) {
				sum += (ns[i] - '0');
				i += 1;
			}
			if(i < ns.size()) {
				ns = ns.substr(i);
			}
			ll len = ns.size();
			ll val;istringstream ss(ns);ss >> val;
			ll pow10 = pow(10, len);
			cout << pow10 - val << "\n";
		}
	}
	return 0;
}