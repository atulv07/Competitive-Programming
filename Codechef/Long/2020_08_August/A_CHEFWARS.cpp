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

	int t, p, h;
	cin >> t;
	while(t--) {
		cin >> h >> p;
		while(h > 0 && p > 0) {
			h -= p;
			p /= 2;
		}
		if(h <= 0) {
			cout << "1\n";
		}
		else if(p == 0) {
			cout << "0\n";
		}
	}
	return 0;
}