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
	cin >> t;
	while(t--) {
		int n, a;
		cin >> n;
		vector<int> A, B;
		bool isSorted = true;
		bool has0 = false;
		bool has1 = false;
		for(int i = 0; i < n; i++) {
			cin >> a;
			A.push_back(a);
			if(i > 0 && A[i] - A[i - 1] < 0) {
				isSorted = false;
			}
		}
		for(int i = 0; i < n; i++) {
			cin >> a;
			B.push_back(a);
			if(a == 0) {
				has0 = true;
			}
			if(a == 1) {
				has1 = true;
			}
		}
		if(isSorted || (has0 && has1)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}