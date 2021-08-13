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

	long long int t, n, a, q;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<long long int> vals;
		vector<long long int> sums;
		long long int sum = 0;
		for(long long int i = 0; i < n; i++) {
			cin >> a;
			vals.push_back(a);
			sum += a;
			sums.push_back(sum);
		}
		long long int k = 0;
		sums.push_back(sum);
		vals.push_back(sums[n] / n);
		for(int i = n + 1; i < 10 * n; i++) {
			sums.push_back(sums[i - 1] - vals[k] + vals[i - 1]);
			vals.push_back(sums[i] / n);
			k++;
		}
		cin >> q;
		for(long long int i = 0; i < q; i++) {
			cin >> a;
			if(a >= 10 * n) {
				cout << vals[10 * n - 1] << "\n";
			}
			else {
				cout << vals[a - 1] << "\n";
			}
		}
	}
	return 0;
}