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

	int t, x, y, z;
	cin >> t;
	while(t--) {
		cin >> x >> y >> z;
		int a, b, c;
		if(x == y || y == z || z == x) {
			if(x == y) {
				a = x;
				b = z;
				c = z;
			}
			else if(y == z) {
				a = x;
				b = x;
				c = y;
			}
			else if(x == z) {
				a = y;
				b = x;
				c = y;
			}
			if(max(a, b) == x && max(a, c) == y && max(b, c) == z) {
				cout << "YES" << "\n";
				cout << a << " " << b << " " << c << "\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}