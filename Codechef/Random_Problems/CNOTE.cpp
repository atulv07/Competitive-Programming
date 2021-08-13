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

	int t, x, y, k, n, p, c;
	cin >> t;
	while(t--) {
		cin >> x >> y >> k >> n;
		bool found = false;
		for(int i = 0; i < n; i++) {
			cin >> p >> c;
			if(c <= k) {
				if(x - y <= p) {
					found = true;
				}
			}
		}
		if(found) {
			cout << "LuckyChef" << "\n";
		}
		else {
			cout << "UnluckyChef" << "\n";
		}
	}
	return 0;
}