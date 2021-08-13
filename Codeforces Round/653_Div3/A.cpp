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
		long long int x, y, n;
		cin >> x >> y >> n;
		if((n / x) * x + y <= n) {
			cout << (n / x) * x + y << "\n";
		}
		else{
			cout << (n / x - 1) * x + y << "\n";
		}
	}
	return 0;
}