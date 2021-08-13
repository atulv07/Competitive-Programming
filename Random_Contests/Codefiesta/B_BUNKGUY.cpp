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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		long long int sum = (n * (n + 1)) / 2;
		for(int i = 0; i < n - 1; i++) {
			cin >> a;
			sum -= a;
		}
		cout << sum << "\n";
	}
	return 0;
}