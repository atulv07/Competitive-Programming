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

	int n, a, b;
	cin >> n;
	vector<pair<int, int>> arr;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}
	sort(arr.begin(), arr.end());

	int ans = -1;
	for(int i = 0; i < n; i++) {
		if(arr[i].second >= ans) {
			ans = arr[i].second;
		}
		else {
			ans = arr[i].first;
		}
	}
	cout << ans << "\n";
	return 0;
}