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
		long long int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << (x2 - x1)*(y2 - y1) + 1 << endl;
	}
	return 0;
}