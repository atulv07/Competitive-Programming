#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while (t--) {
		int n, a;
		cin >> n;
		vector<int> arr;
		int odd = 0;
		int even = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
			if (a % 2 == 0) {
				even += 1;
			}
			else {
				odd += 1;
			}
		}
		if (even % 2 == 0 && odd % 2 == 0) {
			cout << "YES" << endl;
		}
		else {
			sort(arr.begin(), arr.end());
			int f = 0;
			for (int i = 1; i < n; i++) {
				if (arr[i] - arr[i - 1] == 1) {
					f = 1;
					break;
				}
			}
			if (f) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}