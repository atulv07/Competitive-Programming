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
		string j, s;
		cin >> j >> s;
		int count = 0;
		for(int x = 0; x < s.size(); x++) {
			for(int y = 0; y < j.size(); y++) {
				if(s[x] == j[y]) {
					count += 1;
					y = j.size();
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}