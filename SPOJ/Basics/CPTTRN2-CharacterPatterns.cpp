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
		int l, c;
		cin >> l >> c;
		for(int i = 0; i < l; i++) {
			if(i == 0 || i == l - 1) {
				cout << string(c, '*') << endl;
			}
			else {
				if(c == 1) {
					cout << "*" << endl;
				}
				else {
					cout << "*" << string(c - 2, '.') << "*" << endl;
				}
			}
		}
		cout << endl;
	}
	return 0;
}