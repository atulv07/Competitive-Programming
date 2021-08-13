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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int count = 0;
		int i = 0;
		while(i < n && s[i] != '1') {
			i += 1;
		}
		int gap = i;
		if(i == n) {
			if(gap % (k + 1) > 0) {
				count += 1;
			}
		}
		count += (gap / (k + 1));
		i += 1;
		gap = 0;
		while(i < n) {
			if(s[i] == '1') {
				if((gap - k) >= (k + 1)) {
					count += ((gap - k) / (k + 1));
				}
				gap = 0;
			}
			else {
				gap += 1;
			}
			i += 1;
		}
		count += (gap / (k + 1));
		cout << count << endl;
	}
	return 0;
}