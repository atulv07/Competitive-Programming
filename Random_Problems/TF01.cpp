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

bool subsetSum(vector<int> arr, int n, int k) {
	if(k == 0) return true;
	if(n == 0) return false;
	if(arr[n - 1] <= k) return subsetSum(arr, n - 1, k - arr[n - 1]) || subsetSum(arr, n - 1, k);
	else return subsetSum(arr, n - 1, k);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> arr(n + 1);
		for(int i = 0; i < n; i++) cin >> arr[i];
		// cout << subsetSum(arr, n, k) << "\n";

		vector<bool> dp(k + 1, false);
		dp[0] = true;
		for(int i = 0; i < n; i++) {
			for(int j = k; j >= arr[i]; j--) {
				if(!dp[j] && dp[j - arr[i]]) dp[j] = true;
			}
		}
		cout << dp[k] << "\n";
	}
	return 0;
}