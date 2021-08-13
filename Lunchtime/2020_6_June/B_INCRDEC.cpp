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
		int n, a;
		cin >> n;
		unordered_map<int, int> um;
		vector<int> arr;
		bool noP = false;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(um.find(a) == um.end()) {
				um.insert(make_pair(a, 1));
				arr.push_back(a);
			}
			else {
				um[a] += 1;
				if(um[a] > 2) {
					cout << "NO" << "\n";
					noP = true;
				}
			}
		}
		if(noP == false) {
			sort(arr.begin(), arr.end());
			if(um[arr[arr.size() - 1]] > 1) {
				cout << "NO" << "\n";
			}
			else {
				cout << "YES" << "\n";
				vector<int> next;
				for(int i = 0; i < arr.size(); i++) {
					cout << arr[i] << " ";
					if(um[arr[i]] > 1) {
						next.push_back(arr[i]);
					}
				}
				for(int i = next.size() - 1; i >=0; i--) {
					cout << next[i] << " ";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}