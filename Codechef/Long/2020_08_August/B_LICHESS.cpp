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

	int t, n, k, a;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int minMoves = INT_MAX;
		int s = -1;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a <= k) {
				if(k % a == 0) {
					if(k / a < minMoves) {
						minMoves = k / a;
						s = a;
					}
				}
			}
		}
		cout << s << "\n";
	}
	return 0;
}