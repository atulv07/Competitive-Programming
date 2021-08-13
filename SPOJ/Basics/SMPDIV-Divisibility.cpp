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
		int n, x, y;
		cin >> n >> x >> y;
		for(int i = 2; i < n; i++) {
			if(i % x == 0 && i % y != 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}