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

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int count3 = 0;
		while(n % 3 == 0) {
			count3 += 1;
			n /= 3;
		}
		int count2 = 0;
		while(n % 2 == 0) {
			count2 += 1;
			n /= 2;
		}
		int count6 = min(count2, count3);
		count2 -= count6;
		count3 -= count6;
		if(n != 1) {
			cout << -1 << "\n";
		}
		else {
			if(count2 == 0 && count3 == 0) {
				cout << count6 << "\n";
			}
			else if(count2 > 0 && count3 == 0) {
				cout << -1 << "\n";
			}
			else if(count2 == 0 && count3 > 0) {
				cout << count6 + 2 * count3 << "\n";
			}
		}
	}
	return 0;
}