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

	int t, m, n, a;
	cin >> t;
	while(t--) {
		cin >> m >> n;
		vector<int> arr;
		unordered_map<int, int> um;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
			um[a] = i + 1;
		}
		for(int i = 0; i < n; i++) {
			if(um.find(m - arr[i]) != um.end()) {
				if(um[m - arr[i]] > i) {
					cout << i + 1 << " " << um[m - arr[i]] << "\n";
					i = n;
				}
			}
		}
	}
	return 0;
}