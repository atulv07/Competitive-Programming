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

	long long int t, n, m, x, y;
	cin >> t;
	while(t--) {
		cin >> n >> m >> x >> y;
		long long int a, b;
		if(y >= 2 * x) {
			a = x;
			b = x;
		}
		else if(y >= x) {
			a = x;
			b = y - x;
		}
		else {
			a = y;
			b = 0;
		}
		if(n == 1 && m == 1) {
			cout << x << "\n";
		}
		else if(n % 2 == 1 && m % 2 == 1) {
			cout << (a * (((n * m) / 2) + 1)) + (b * ((n * m) / 2)) << "\n";
		}
		else {
			cout << (a * ((n * m) / 2)) + (b * ((n * m) / 2)) << "\n";
		}
	}
	return 0;
}