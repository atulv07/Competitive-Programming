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
		unordered_map<int, int> um;
		int count = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			um[a] += 1;
			if(um[a] > (n + 1) / 2) {
				count += 1;
			}
		}
		if(count >= 1) {
			cout << 0 << "\n";
		}
		else {
		}
	}
	return 0;
}