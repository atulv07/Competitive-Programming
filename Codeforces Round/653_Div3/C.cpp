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
		int n;
		string s;
		cin >> n >> s;
		int val = 0;
		int count = 0;
		int i = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '(') {
				val += 1;
			}
			else if(s[i] == ')') {
				val -= 1;
				if(val < 0) {
					count += 1;
					val = 0;
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}