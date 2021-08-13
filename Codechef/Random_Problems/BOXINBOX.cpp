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

	int n, a;
	cin >> n;
	vector<vector<int>> arr;
	for(int i = 0; i < n; i++) {
		vector<int> t;
		for(int j = 0; j < n; j++) {
			cin >> a;
			t.push_back(a);
		}
		arr.push_back(t);
	}
	int ans = 0;
	int i = 0;
	while(i <= n - i - 1) {
		int minn = 1000000000;
		for(int j = i; j < n - i; j++) {
			minn = min(minn, arr[j][i]);
			minn = min(minn, arr[i][j]);
			minn = min(minn, arr[j][n - i - 1]);
			minn = min(minn, arr[n - i - 1][j]);
		}
		ans += minn;
		i += 1;
	}
	cout << ans << "\n";
	return 0;
}