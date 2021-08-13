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

	int t, n;
	string s;
	cin >> t;
	while(t--) {
		cin >> n;
		cin >> s;
		int zero = 0;
		int one = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') zero += 1;
			else if(s[i] == '1') one += 1;
		}
		long long int ans = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				zero -= 1;
				ans += one;
			}
			else if(s[i] == '1') {
				one -= 1;
				ans += zero;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}