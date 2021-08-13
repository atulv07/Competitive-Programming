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

	int t, n, b, m, x;;
	cin >> t;
	while(t--) {
		cin >> n >> b >> m;
		int cacheL = -1;
		int cacheR = -1;
		int count = 0;
		for(int i = 0; i < m; i++) {
			cin >> x;
			if(!(x >= cacheL && x < cacheR)) {
				count += 1;
				cacheR = (floor((float)x/b) + 1) * b;
				cacheL = cacheR - b;
			}
		}
		cout << count << endl;
	}
	return 0;
}