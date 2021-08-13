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


	int t, n, q, l, r, val;
	cin >> t;
	while(t--) {
		cin >> n >> q;
		long long int ans = 0;
		for(int i = 0; i < q; i++) {
			cin >> l >> r >> val;
			ans += (r - l + 1) * val;
		}
		cout << ans << "\n";
	}
	return 0;
}