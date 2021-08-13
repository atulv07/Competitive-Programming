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
		int n, k, a;
		cin >> n >> k;
		long long int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a > k) {
				sum += (a - k);
			}
		}
		cout << sum << endl;
	}
	return 0;
}