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
		vector<bool> A(m + 1, false);
		A[0] = true;
		for(int i = 0; i < n; i++) {
			cin >> a;
			for(int j = m; j >= 0; j--) {
				if(A[j]) {
					if(j + a <= m) {
						A[j + a] = true;
					}
				}
			}
		}
		if(A[m]) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}
	return 0;
}