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

	int t, pc, pr;
	cin >> t;
	while(t--) {
		cin >> pc >> pr;
		int c = 0, r = 0;
		if(pc % 9 > 0) {
			c += 1;
		}
		if(pr % 9 > 0) {
			r += 1;
		}
		c += (pc / 9);
		r += (pr / 9);
		if(c >= r) {
			cout << 1 << " " << r << "\n";
		}
		else {
			cout << 0 << " " << c << "\n";
		}
	}
	return 0;
}