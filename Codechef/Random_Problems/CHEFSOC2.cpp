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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, m, s;;
	cin >> t;
	while(t--) {
		vector<int> arr;
		vector<vector<int>> dp;
		cin >> n >> m >> s;
		s--;
		arr.resize(m);
		dp.resize(n, vector<int> (m + 1, 0));
		for(int i = 0; i < m; i++)
			cin >> arr[i];
		for(int j = 0; j <= m; j++) {
			for(int i = 0; i < n; i++) {
				if(j == 0) dp[i][j] = (i == s);
				else {
					int result = 0;
					if(i + arr[j - 1] < n) result += dp[i + arr[j - 1]][j - 1];
					if(i - arr[j - 1] >= 0) result += dp[i - arr[j - 1]][j - 1];
					dp[i][j] = result % 1000000007;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			cout << dp[i][m] << " ";
		}
		cout << "\n";
		arr.clear();
		dp.clear();
	}
	return 0;
}