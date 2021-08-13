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

	int t, n, m, a;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vector<bool> arr(n + 1, false);
		for(int i = 0; i < m; i++) {
			cin >> a;
			arr[a] = true;
		}
		vector<int> chef;
		vector<int> assis;
		int count = 0;
		for(int i = 1; i <= n; i++) {
			if(arr[i] == false) {
				count += 1;
				if(count % 2 == 1) {
					chef.push_back(i);
				}
				else {
					assis.push_back(i);
				}
			}
		}
		for(int i = 0; i < chef.size(); i++) {
			cout << chef[i] << " ";
		}
		cout << "\n";
		for(int i = 0; i < assis.size(); i++) {
			cout << assis[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}