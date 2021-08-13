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

	int t, d;
	cin >> t;
	while(t--) {
		cin >> d;
		cout << 2 * d + 1 << "\n";
		cout << string(d, 'a') << 'b' << string(d, 'a') << "\n";
	}
	return 0;
}