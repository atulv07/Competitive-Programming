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
	string s;
	cin >> t;
	while(t--) {
		cin >> n;
		cin >> s;
		vector<int> ans(n, 0);
		vector<int> pos0, pos1;
		for(int i = 0; i < n; i++) {
			int newPos = pos0.size() + pos1.size() + 1;
			if(s[i] == '0') {
				if(!pos1.empty()) {
					newPos = pos1.back();
					pos1.pop_back();
				}
				pos0.push_back(newPos);
			}
			else if(s[i] == '1') {
				if(!pos0.empty()) {
					newPos = pos0.back();
					pos0.pop_back();
				}
				pos1.push_back(newPos);
			}
			ans[i] = newPos;
		}
		cout << pos1.size() + pos0.size() << "\n";
		for(int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}