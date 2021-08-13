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
		vector<int> arr;
		int len0 = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a == 0) {
				len0 += 1;
			}
			else {
				if(len0 > 0) arr.push_back(len0);
				len0 = 0;
			}
		}
		if(len0 > 0) arr.push_back(len0);
		sort(arr.begin(), arr.end());
		if(arr.size() == 0) cout << "No\n";
		else if(arr.size() == 1) {
			if(arr[0] % 2 == 0) cout << "No\n";
			else cout << "Yes\n";
		}
		else {
			if(arr[arr.size() - 1] == arr[arr.size() - 2]) cout << "No\n";
			else {
				if(arr[arr.size() - 1] % 2 == 0) {
					cout << "No\n";
				}
				else {
					if(arr[arr.size() - 2] > arr[arr.size() - 1] / 2) {
						cout << "No\n";
					}
					else {
						cout << "Yes\n";
					}
				}
			}
		}
	}
	return 0;
}