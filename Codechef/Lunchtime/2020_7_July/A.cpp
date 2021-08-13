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
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a % k == 0) cout << 1;
			else cout << 0;
		}
		cout << "\n";
	}
	return 0;
}