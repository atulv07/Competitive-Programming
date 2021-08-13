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

	int t, n, k, a;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		if(k == 1) {
			vector<int> arr;
			for(int i = 0; i < n; i++) {
				cin >> a;
				arr.push_back(a);
			}
			int count = 1;
			unordered_map<int, int> um;
			int totalArgCount = 0;
			int currTableArgCount = 0;
			for(int i = 0; i < n; i++) {
				if(um.find(arr[i]) == um.end()) {
					um.insert(make_pair(arr[i], 1));
				}
				else {
					um[arr[i]] += 1;
					if(um[arr[i]] == 2) {
						currTableArgCount += 2;
					}
					else {
						currTableArgCount += 1;
					}
					if(currTableArgCount >= 2 * k) {
						if(um[arr[i]] == 2) {
							totalArgCount += (currTableArgCount - 2);
						}
						else {
							totalArgCount += (currTableArgCount - 1);
						}
						count += 1;
						um.clear();
						currTableArgCount = 0;
						um.insert(make_pair(arr[i], 1));
					}
				}
			}
			cout << count * k + totalArgCount + currTableArgCount << "\n";
			continue;
		}
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}

		vector<vector<int>> mat;
		for(int i = 0; i <= n; i++) {
			vector<int> myA(n + 1, 0);
			mat.push_back(myA);
		}

		unordered_map<int, int> mp;
		for(int i = 0; i < n; i++) {
			for(int j = i; j < n; j++) {
				if(j > 0) {
					mat[i][j] = mat[i][j - 1];
				}
				if(mp.find(arr[j]) != mp.end() && mp[arr[j]] > 0) {
					if(mp[arr[j]] == 1) {
						mat[i][j] += 2;
					}
					else {
						mat[i][j] += 1;
					}
				}
				mp[arr[j]] += 1;
			}
			mp.clear();
		}

		vector<vector<int>> dp;
		for(int i = 0; i <= 1001; i++) {
			vector<int> myA(1001, 0);
			dp.push_back(myA);
		}

		for(int i = 1; i <= n; i++) {
			dp[1][i] = mat[0][i - 1];
		}
		for(int i = 2; i <= 100; i++) {
			for(int j = 2; j <= n; j++) {
				int minn = INT_MAX;
				for(int x = 1; x < j; x++) {
					minn = min(mat[x][j - 1] + dp[i - 1][x], minn);
				}
				dp[i][j] = minn;
			}
		}

		int ans = INT_MAX;
		for(int i = 1; i <= 100; i++) {
			ans = min(k * i + dp[i][n], ans);
		}
		cout << ans << "\n";
	}
	return 0;
}