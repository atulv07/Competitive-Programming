#include<bits/stdc++.h>
using namespace std;

// CODE STARTS HERE

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
		int n, s, p;
		cin >> n >> s;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> p;
			arr.push_back(p);
		}
		int minD = 101;
		int minA = 101;
		for(int i = 0; i < n; i++) {
			cin >> p;
			if(p == 0 && minD > arr[i]) {
				minD = arr[i];
			}
			else if(p == 1 && minA > arr[i]) {
				minA = arr[i];
			}
		}
		if(minA + minD + s <= 100) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
	return 0;
}