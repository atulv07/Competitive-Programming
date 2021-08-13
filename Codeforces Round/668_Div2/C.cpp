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

	int t, n, k;
	string s;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		cin >> s;
		int zero = 0;
		int one = 0;
		bool poss = true;
		for(int i = 0; i < k; i++) {
			int tmp = -1;
			for(int j = i; j < n; j += k) {
				if(s[j] != '?') {
					if(tmp != -1 && s[j] - '0' != tmp) {
						poss = false;
						break;
					}
					tmp = s[j] - '0';
				}
			}
			if(tmp != -1) {
				if(tmp == 0) zero += 1;
				else one += 1;
			}
		}
		if(max(zero, one) > k / 2) {
			poss = false;
		}
		if(poss) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}