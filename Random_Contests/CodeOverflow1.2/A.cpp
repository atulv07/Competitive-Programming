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

	long long int n, k, s;
	cin >> n >> k >> s;
	vector<long long int> arr(n);
	for(long long int i = 0; i < n; i++) {
		cin >> arr[i];
		if(i > 0) {
			arr[i] += arr[i - 1];
		}
	}
	arr.push_back(arr[n - 1]);
	long long int ans = LONG_MAX;
	long long int l = 0;
	long long int r = k + 1;
	if(arr[n - 1] <= s) {
		cout << -1 << "\n";
		return 0;
	}
	while(l < n && r <= n) {
		if(arr[r] - arr[l] > s) {
			ans = min(r - l, ans);
			l++;
			while(r - l <= k) r++;
		}
		else r++;
	}
	cout << ans;
	return 0;
}