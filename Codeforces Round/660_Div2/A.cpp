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
		if(n == 36 || n == 40 || n == 44) {
			cout << "YES\n";
			cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << "\n";
		}
		else if(n > 30) {
			cout << "YES\n";
			cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << "\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}