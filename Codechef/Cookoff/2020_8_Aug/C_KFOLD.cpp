#include<bits/stdc++.h>
using namespace std;

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
		int c1 = 0, c0 = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') c0 += 1;
			else if(s[i] == '1') c1 += 1;
		}
		int fact = n / k;
		if(c1 % fact == 0 && c0 % fact == 0) {
			c1 /= fact;
			c0 /= fact;
			string t1 = "", t2 = "";
			for(int i = 0; i < c0; i++) {
				t1 += '0';
			}
			for(int i = 0; i < c1; i++) {
				t1 += '1';
			}
			for(int i = 0; i < c1; i++) {
				t2 += '1';
			}
			for(int i = 0; i < c0; i++) {
				t2 += '0';
			}
			string ans = "";
			for(int i = 0; i < fact; i++) {
				if(i % 2 == 0) ans += t1;
				else ans += t2;
			}
			cout << ans << "\n";
		}
		else {
			cout << "IMPOSSIBLE\n";
		}
	}
	return 0;
}