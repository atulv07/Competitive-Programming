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
		unordered_map<int, int> um;
		for(int i = 0; i < 2 * n; i++) {
			cin >> a;
			if(um.find(a) == um.end()) {
				um[a] = 1;
				cout << a << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}