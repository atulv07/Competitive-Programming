#include<bits/stdc++.h>
using namespace std;

int main() {
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
		if(s.length() % 2 != 0) {
			cout << 0 << endl;
		}
		else {
			int count = 0;
			for(int i = 2; i < s.length(); i += 2) {
				string l = s.substr(0, i);
				string r = s.substr(i);
				if(l.substr(0, l.length()/2) == l.substr(l.length()/2) && r.substr(0, r.length()/2) == r.substr(r.length()/2)) {
					count += 1;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}