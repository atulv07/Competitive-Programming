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
		cout << floor(sqrt(n)) << "\n";
	}
	return 0;
}