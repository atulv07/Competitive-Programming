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
		vector<int> arr;
		bool cannt = false;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a > k) cannt = true;
			arr.push_back(a);
		}
		if(cannt) {
			cout << -1 << "\n";
		}
		else {
			int cnt = 0;
			int i = 0;
			while(i < n) {
				int sum = 0;
				while(i < n && arr[i] + sum <= k) {
					sum += arr[i];
					i += 1;
				}
				cnt += 1;
			}
			cout << cnt << "\n";
		}
	}
	return 0;
}