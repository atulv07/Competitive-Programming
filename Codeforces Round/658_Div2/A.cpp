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

	int t, n, m, a;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(mp.find(a) == mp.end()) {
				mp[a] = 1;
			}
			else {
				mp[a] += 1;
			}
		}
		vector<int> arr;
		for(int i = 0; i < m; i++) {
			cin >> a;
			if(mp.find(a) != mp.end()){
				if(mp[a] > 0) {
					mp[a] -= 1;
					arr.push_back(a);
				}
			}
		}
		if(arr.size() > 0) {
			cout << "YES\n" << 1 << " " << arr[0] << "\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}