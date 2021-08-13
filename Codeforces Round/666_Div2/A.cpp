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

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		string s;
		vector<char> arr;
		unordered_map<char, int> um;
		for(int i = 0; i < n; i++) {
			cin >> s;
			for(int j = 0; j < s.size(); j++) {
				if(um.find(s[j]) == um.end()) {
					um.insert(make_pair(s[j], 1));
					arr.push_back(s[j]);
				}
				else {
					um[s[j]] += 1;
				}
			}
		}
		bool poss = true;
		for(int i = 0; i < arr.size(); i++) {
			if(um[arr[i]] % n != 0) poss = false;
		}
		if(poss) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}