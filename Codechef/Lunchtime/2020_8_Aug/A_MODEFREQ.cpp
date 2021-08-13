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
		map<int, int> um;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(um.find(a) == um.end()) {
				arr.push_back(a);
				um[a] = 1;
			}
			else um[a] += 1;
		}
		map<int, int> um1;
		int maxVal = 0;
		int val = 0;
		for(int i = 0; i < arr.size(); i++) {
			if(um1.find(um[arr[i]]) == um1.end()) 
				um1[um[arr[i]]] = 1;
			else 
				um1[um[arr[i]]] += 1;
			if(um1[um[arr[i]]] > maxVal) {
				maxVal = um1[um[arr[i]]];
				val = um[arr[i]];
			}
			else if(um1[um[arr[i]]] == maxVal) {
				val = min(val, um[arr[i]]);
			}
		}
		cout << val << "\n";
	}
	return 0;
}