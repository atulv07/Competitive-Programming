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
		int count = 0;
		for(int i = 0; i < l; i++) {
			for(int j = 0; j < c; j++) {
				if(count % 2 == 0) {
					cout << "*";
				}
				else {
					cout << ".";
				}
				count += 1;
			}
			if(c % 2 == 0) {
				count -= 1;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}