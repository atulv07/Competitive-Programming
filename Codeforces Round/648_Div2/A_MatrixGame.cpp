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
		int n, m, a;
		cin >> n >> m;
		set<int, greater<int>> r, d;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> a;
				if(a == 1) {
					r.insert(i);
					d.insert(j);
				}
			}
		}
		int mn = min(n - r.size(), m - d.size());
		if(mn % 2 != 0) {
			cout << "Ashish" << endl;
		}
		else {
			cout << "Vivek" << endl;
		}
	}
	return 0;
}