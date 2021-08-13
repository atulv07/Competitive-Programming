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
	string s;
	while(t--) {
		cin >> n >> s;
		unordered_map<char, int> um;
		for(int i = 0; i < n; i++) {
			if(um.find(s[i]) == um.end()) {
				um[s[i]] = 1;
			}
			else {
				um[s[i]] += 1;
			}
		}
		int i = 0;
		bool prob = false;
		while(prob == false && i < n) {
			if(um[s[i]] % 2 != 0) {
				prob = true;
			}
			i += 1;
		}
		if(prob) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}
	return 0;
}