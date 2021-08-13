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

	int t, n, k, w;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> arr;
		long long int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> w;
			arr.push_back(w);
			sum += w;
		}
		k = min(n - k, k);
		sort(arr.begin(), arr.end());
		long long int sonSum = 0;
		for(int i = 0; i < k; i++) {
			sonSum += arr[i];
		}
		cout << sum - (2 * sonSum) << "\n";
	}
	return 0;
}