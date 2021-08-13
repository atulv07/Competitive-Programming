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
	cin >> t;
	while(t--) {
		cin >> n >> m;
		int less = 0;
		int greater = 0;
		set<int> lessSet;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a < m) {
				less += 1;
				lessSet.insert(a);
			}
			else if(a > m) {
				greater += 1;
			}
		}
		if(lessSet.size() != m - 1) {
			cout << -1 << endl;
		}
		else {
			cout << less + greater << endl;
		}
	}
	return 0;
}