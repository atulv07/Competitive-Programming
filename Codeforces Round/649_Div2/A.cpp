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

	int t, n, x, a;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		vector<int> arr;
		int sum = 0;
		int odd = 0;
		int even = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
			if(a != 0) {
				if(a % 2 == 0) {
					even += 1;
				}
				else {
					odd += 1;
				}
			}
		}
		if(sum == 0){
			cout << -1 << endl;
		}
		else if(sum % x != 0) {
			cout << n << endl;
		}
		else {

		}
	}
	return 0;
}