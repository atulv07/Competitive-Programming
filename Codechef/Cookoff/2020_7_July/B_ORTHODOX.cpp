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

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector <long long int> arr;
		long long int a;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		if (n > 60) {
			cout << "NO\n";
		}
		else {
			set <long long int> q;
			for (int i = 0; i < n; i++) {
				long long int x = 0;
				for (int j = i; j < n; j++) {
					x |= arr[j];
					q.insert(x);
				}
			}
			if (q.size() == n * (n + 1) / 2) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}