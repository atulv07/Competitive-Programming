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
	unordered_map<int, int> um;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(um.find(a) == um.end()) {
			um.insert(make_pair(a, 1));
		}
		else {
			um[a] += 1;
		}
	}
	cin >> m;
	vector<int> print;
	for(int i = 0; i < m; i++) {
		cin >> a;
		if(um.find(a) == um.end()) {
			print.push_back(a);
		}
		else {
			um[a] -= 1;
			if(um[a] < 0) {
				um[a] = 0;
				print.push_back(a);
			}
		}
	}
	sort(print.begin(), print.end());
	for(int i = 0; i < print.size(); i++) {
		cout << print[i] << " ";
	}
	cout << "\n";
	return 0;
}