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

	int t, n, a, k;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		cin >> k;
		k = arr[k - 1];
		sort(arr.begin(), arr.end());
		for(int i = 0; i < n; i++) {
			if(arr[i] == k) {
				cout << i + 1 << "\n";
				i = n;
			}
		}
	}
	return 0;
}