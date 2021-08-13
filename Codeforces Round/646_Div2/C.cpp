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
	cin >>t;
	while(t--) {
		int n, x, a, b;
		cin >> n >> x;
		vector<int> deg;
		deg.assign(n + 1, 0);
		for(int i = 0; i < n - 1; i++) {
			cin >> a >> b;
			deg[a] += 1;
			deg[b] += 1;
		}
		if(deg[x] <= 1) {
			cout << "Ayush" << endl;
		}
		else {
			if(n % 2 == 0) {
				cout << "Ayush" << endl;
			}
			else {
				cout << "Ashish" << endl;
			}
		}
	}
	return 0;
}