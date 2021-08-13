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

	ll t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		bool found = false;
		while(found == false) {
			ostringstream s;
			s << n;
			string num = s.str();
			ll l = num.size();
			ll i = 1;
			while(i < l && num[i] - '0' >= num[i - 1] - '0') {
				i += 1;
			}
			if(i == l) found = true;
			else n -= 1;
		}
		cout << n << "\n";
	}
	return 0;
}