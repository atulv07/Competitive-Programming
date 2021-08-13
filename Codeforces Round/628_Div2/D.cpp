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

	long long int u, v;
	cin >> u >> v;
	if(u > v || u%2 != v%2) {
		cout << -1 << endl;
	}
	else if(u == v) {
		if(u == 0) {
			cout << 0 << endl;
		}
		else {
			cout << 1 << endl;
			cout << u << endl;
		}
	}
	else {
		long long int x = (v - u) / 2;
		if(u & x) {
			cout << 3 << endl;
			cout << u << " " << x << " " << x << endl;
		}
		else {
			cout << 2 << endl;
			cout << (u ^ x) << " " << x << endl;
		}
	}
	return 0;
}