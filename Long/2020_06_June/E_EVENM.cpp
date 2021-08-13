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
		int n;
		cin >> n;
		int j = 1;
		while(j <= n) {
			int val = n*j;
			if(j % 2 == 0) {
				for(int i = val; i > val - n; i--) {
					cout << i << " ";
				}
				cout << endl;
			}
			else {
				for(int i = val - n + 1; i <= val; i++) {
					cout << i << " ";
				}
				cout << endl;
			}
			j += 1;
		}
	}
	return 0;
}