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
		int n, q, a, b;
		cin >> n >> q;
		for(int i = 0; i < n; i++){
			cin >> a;
		}
		for(int i = 0; i < n - 1; i++){
			cin >> a >> b;
		}
		for(int i = 0; i < q; i++) {
			cin >> a >> b;
		}
	}
	return 0;
}