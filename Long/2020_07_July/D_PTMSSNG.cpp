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

	int t, n, x, y;
	cin >> t;
	while(t--) {
		vector<int> X;
		vector<int> Y;
		map<int, int> umX;
		map<int, int> umY;
		cin >> n;
		for(int i = 0; i < 4 * n - 1; i++) {
			cin >> x >> y;
			if(umX.find(x) == umX.end()) {
				X.push_back(x);
				umX.insert(make_pair(x, 1));
			}
			else {
				umX[x] += 1;
			}
			if(umY.find(y) == umY.end()) {
				Y.push_back(y);
				umY.insert(make_pair(y, 1));
			}
			else {
				umY[y] += 1;
			}
		}

		int i = 0;
		bool found = false;
		int missingX;
		while(found == false && i < X.size()) {
			if(umX[X[i]] % 2 != 0) {
				missingX = X[i];
				found = true;
			}
			i += 1;
		}

		i = 0;
		found = false;
		int missingY;
		while(found == false && i < Y.size()) {
			if(umY[Y[i]] % 2 != 0) {
				missingY = Y[i];
				found = true;
			}
			i += 1;
		}
		cout << missingX << " " << missingY << "\n";
	}
	return 0;
}