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
	string s;
	while(t--) {
		cin >> s;
		for(int i = 0; i < s.length() / 2; i += 2) {
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}