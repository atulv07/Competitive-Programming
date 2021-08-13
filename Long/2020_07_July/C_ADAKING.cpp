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
		int k;
		cin >> k;
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				if(i == 0 && j == 0) {
					cout << 'O';
					k -= 1;
				}
				else if(k > 0) {
					cout << '.';
					k -= 1;
				}
				else {
					cout << 'X';
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}