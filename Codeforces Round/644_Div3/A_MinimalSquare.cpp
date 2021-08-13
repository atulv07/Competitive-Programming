#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int ans;
		if(2 * a > b) {
			ans = 2 * a;
		}else {
			ans = b;
		}
		cout << ans * ans << endl;
	}
	return 0;
}