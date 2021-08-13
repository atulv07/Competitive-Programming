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

	int a, b;
	cin >> a >> b;
	int ans = a - b;
	if(ans % 10 == 9) {
		cout << ans - 1 << "\n";
	}
	else {
		cout << ans + 1 << "\n";
	}
	return 0;
}