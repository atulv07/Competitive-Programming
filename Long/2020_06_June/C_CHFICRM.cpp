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
		int c5 = 0;
		int c10 = 0;
		int c15 = 0;
		bool lageRho = true;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(lageRho) {
				if(a == 5){
					c5 += 1;
				}
				else if(a == 10) {
					c10 += 1;
					if(c5 > 0) {
						c5 -= 1;
					}
					else {
						lageRho = false;
					}
				}
				else if(a == 15) {
					c15 += 1;
					if(c10 > 0) {
						c10 -= 1;
					}
					else if(c5 >= 2) {
						c5 -= 2;
					}
					else {
						lageRho = false;
					}
				}
			}
		}
		if(lageRho) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}