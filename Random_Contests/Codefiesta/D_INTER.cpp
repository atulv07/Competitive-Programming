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

	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		int n = s.size();
		if(n == 0) return 0;
		vector<int>dp(n + 1, 0);
		dp[0] = 1;
		if(s[0] == '0') dp[1]=0;
		else dp[1] = 1;
		for(int i = 2;i <= n; i++) {
			int first = s[i - 1] - '0';
			int second = stoi(s.substr(i - 2,2));
			if(first >= 1 && first <= 9) dp[i] += dp[i-1];
			if(second >= 10 && second <= 26) dp[i] += dp[i-2];
			dp[i] %= 1000000007;
		}
		cout << dp[n] % 1000000007 << "\n";
	}
	return 0;
}