#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<long long int> power(32, 0);
	power[0] = 1;
	for(int i = 1; i < 32; i++) {
		power[i] = power[i - 1] * 2;
	}

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long int t;
	cin >> t;
	while(t--) {
		long long int n, k, a;
		cin >> n >> k;
		vector<long long int> count(32, 0);
		vector<long long int> arr;
		for(long long int i = 0; i < n; i++) {
			cin >> a;
			long long int j = 0;
			long long int x = a;
			while(x != 0) {
				if(x % 2 == 1) {
					count[j] += 1;
				}
				x /= 2;
				j += 1;
			}
		}

		vector<pair<long long int, long long int>> values;
		for(long long int i = 0; i < 32; i++) {
			values.push_back(make_pair(count[i] * power[i], -i));
		}
		sort(values.begin(), values.end());

		long long int ans = 0;
		long long int i = values.size() - 1;
		while(k > 0) {
			ans += power[-values[i].second];
			k -= 1;
			i -= 1;
		}
		cout << ans << "\n";
	}
	return 0;
}
