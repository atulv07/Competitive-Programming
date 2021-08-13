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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		int i = n - 2;
		while(i >= 0 && arr[i] >= arr[i + 1]) {
			i -= 1;
		}
		while(i >= 0 && arr[i] <= arr[i + 1]) {
			i -= 1;
		}
		cout << i + 1 << "\n";
	}
	return 0;
}