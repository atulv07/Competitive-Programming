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
		int count = 1;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(i > 0) {
				if(a == arr[0]) {
					count += 1;
				}
			}
			arr.push_back(a);
		}
		if(n == 1 || count == n) {
			cout << 0 << "\n";
		}
		else {
			
		}
	}
	return 0;
}