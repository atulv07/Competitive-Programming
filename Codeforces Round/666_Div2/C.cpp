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

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if(n == 1) {
		cout << 1 << " " << 1 << "\n";
		cout << 0 << "\n";
		cout << 1 << " " << 1 << "\n";
		cout << 0 << "\n";
		cout << 1 << " " << 1 << "\n";
		cout << -arr[0] << "\n";
	}
	else {
		cout << 1 << " " << n << "\n";
		for(int i = 0; i < n; i++) {
			cout << -1LL * arr[i] * n << " ";
		}
		cout << "\n";

		cout << 1 << " " << n - 1 << "\n";
		for(int i = 0; i < n - 1; i++) {
			cout << 1LL * arr[i] * (n - 1) << " ";
		}
		cout << "\n";
		
		cout << n << " " << n << "\n";
		cout << 1LL * arr[n - 1] * (n - 1) << "\n";
	}
	return 0;
}