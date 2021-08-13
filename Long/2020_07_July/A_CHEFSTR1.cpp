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

	long long int t, n, s;
	cin >> t;
	while(t--) {
		cin >> n;
		long long int skipped = 0;

		long long int prev;
		cin >> prev;
		for(long long int i = 1; i < n; i++) {
			cin >> s;
			skipped += (abs(prev - s) - 1);
			prev = s;
		}
		cout << skipped << "\n";
	}
	return 0;
}