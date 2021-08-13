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
		int n, a;
		cin >> n;

		int odd = 0;
		int even = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			int par1 = i%2;
			int par2 = a%2;
			if(par1 != par2) {
				if(par1 == 0) {
					even += 1;
				}
				else {
					odd += 1;
				}
			}
		}
		if(odd == even) {
			cout << (odd + even)/2 << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}