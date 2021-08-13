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

	int t, n, x, a;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		int start = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
		int count = 0;
		for(int i = start; i < n; i++) {
			while(x < arr[i]) {
				x *= 2;
				count += 1;
			}
			x = 2 * arr[i];
			count += 1;
		}
		if(start == 0) {
			cout << count << "\n";
		}
		else {
			int total = start + count;
			start -= 1;
			count = 0;
			for(int i = start; i < n; i++) {
				while(x < arr[i]) {
					x *= 2;
					count += 1;
				}
				x = 2 * arr[i];
				count += 1;
			}
			cout << min(total, count + start) << "\n";
		}
	}
	return 0;
}