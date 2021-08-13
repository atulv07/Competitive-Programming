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

	long long int n, a;
	cin >> n;
	vector<long long int> arr;
	for(long long int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	long long int ans = 2e18;
	for(long long int c = 1; c <= arr[n - 1]; c++) {
		long long int cur = 0;
		long long int val = 1;
		bool ok = true;
		for(int i = 0; i < n; i++) {
			cur += abs(arr[i] - val);
			if(cur > ans) {
				ok = false;
				i = n;
			}
			val *= c;
		}
		if(!ok) c = arr[n - 1] + 1;
		ans = min(ans, cur);
	}
	cout << ans << "\n";
	return 0;
}