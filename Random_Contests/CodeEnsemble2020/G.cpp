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
		string s;
		cin >> s;
		int n = s.size();
		int r = 0, l = 0, u = 0, d = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == 'R') r += 1;
			else if(s[i] == 'L') l += 1;
			else if(s[i] == 'U') u += 1;
			else if(s[i] == 'D') d += 1;
		}
		int x1, y1, q, x, y;
		cin >> x1 >> y1;
		cin >> q;
		while(q--) {
			cin >> x >> y;
			int xmov = x1 - x;
			int ymov = y1 - y;
			bool prob = false;
			if(xmov > 0) {
				if(xmov > l) prob = true;
			}
			else if(xmov < 0) {
				if(abs(xmov) > r) prob = true;
			}
			if(ymov > 0) {
				if(ymov > d) prob = true;
			}
			else if(ymov < 0) {
				if(abs(ymov) > u) prob = true;
			}
			if(prob) cout << "NO\n";
			else cout << "YES " << abs(xmov) + abs(ymov) << "\n";
		}
	}
	return 0;
}