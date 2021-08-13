#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_iUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;

		int ans = n;

		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				if (i <= k) {
					ans = min(ans, n / i);
				}
				if (n / i <= k) {
					ans = min(ans, i);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}