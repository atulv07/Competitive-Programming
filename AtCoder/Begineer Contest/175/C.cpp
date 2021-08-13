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

	long long int x, k, d;
	cin >> x >> k >> d;
	if(d >= abs(x)) {
		if(k % 2 == 0) cout << abs(x);
		else if(k % 2 != 0) cout << min(abs(x - d), abs(x + d));
	}
	else {
		long long int div = abs(x) / d;
		div = min(div, k);
		k -= div;
		if(x < 0) {
			x += div * d;
		}
		else {
			x -= div * d;
		}
		if(k > 0) {
			if(k % 2 == 0) cout << abs(x);
			else cout << min(abs(x + d), abs(x - d));
		}
		else {
			cout << abs(x);
		}
	}
	return 0;
}