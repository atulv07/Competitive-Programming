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

	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		string s;
		int count = 0;
		for(int i = 0; i < n; i++) {
			cin >> s;
			if(i == n - 1) {
				for(int j = 0; j < m - 1; j++) {
					if(s[j] == 'D') {
						count += 1;
					}
				}
			}
			else {
				if(s[m - 1] == 'R') {
					count += 1;
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}