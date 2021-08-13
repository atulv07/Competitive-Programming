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

	int t;
	cin >> t;
	while(t--) {
		int n, k, a;
		cin >> n >> k;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a % k != 0) {
				arr.push_back(a);
			}
		}
		if(arr.size() == 0) {
			cout << 0 << "\n";
			continue;
		}
		sort(arr.begin(), arr.end(), greater<int>());
		
		while(arr.size() != 0) {
			int n = arr.size();
			int x = 0;
			for(int i = 0; i < n; i++) {
				int req = k - 
			}
		}
	}
	return 0;
}