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
		string s;
		cin >> s;
		int n = s.length();
		if(n == 1) {
			cout << 0 << endl;
		}
		else if(n == 2) {
			if(s == "xy" || s == "yx") {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else{
			vector<int> arr;
			arr.assign(n, 0);
			int i = 1;
			int count = 0;
			while(i < n - 1) {
				if(s[i] == 'x') {
					if(s[i - 1] == 'y' && arr[i-1] == 0) {
						count += 1;
						arr[i] = 1;
						arr[i-1] = 1;
						i += 1;
					} else if(s[i+1] == 'y' && arr[i+1] == 0) {
						count += 1;
						arr[i] = 1;
						arr[i+1] = 1;
						i += 2;
					}
					else{
						i += 1;
					}
				}
				else if(s[i] == 'y') {
					if(s[i - 1] == 'x' && arr[i - 1] == 0) {
						count += 1;
						arr[i] = 1;
						arr[i-1] = 1;
						i += 1;
					}
					else if(s[i+1] == 'x' && arr[i + 1] == 0) {
						count += 1;
						arr[i] = 1;
						arr[i+1] = 1;
						i += 2;
					}
					else {
						i += 1;
					}
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}