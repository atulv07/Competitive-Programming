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
		// cout << n << "\n";
		string l = s;
		string r = s;
		l = l.substr(1) + l[0];
		r = r[r.size() - 1] + r.substr(0, r.size() - 1);
		if(l == r) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}