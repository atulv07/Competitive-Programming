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
		long long int sum = 0;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
			sum += a;
		}
		long long int count = sum % n;
		if(count != 0) {
			count = n - count;
		}
		long long int val = (count + sum) / n;
		for(int i = 0; i < arr.size(); i++) {
			if(arr[i] > val) {
				count += (arr[i] - val);
			}
		}
		cout << count << "\n";
	}
	return 0;
}