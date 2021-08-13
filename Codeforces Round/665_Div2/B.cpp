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

	int t, x1, x2, y1, y2, z1, z2;
	cin >> t;
	while(t--) {
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		int ans = 0;
		int tmp = min(z1, y2);
		ans += tmp * 2;
		z1 -= tmp;
		y2 -= tmp;

		tmp = min(y1, x2 + y2);
		y1 -= tmp;
		if(y1) ans -= y1 * 2;
		cout << ans << "\n";
	}
	return 0;
}