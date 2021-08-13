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

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		string s;
		cin >> s;
		long long int count = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				count += 1;
			}
		}
		cout << (count * (count + 1)) / 2 << "\n";
	}
	return 0;
}