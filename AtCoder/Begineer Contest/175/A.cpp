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

	string s;
	cin >> s;
	int len = 0;
	for(int i = 0; i < 3; i++) {
		if(s[i] == 'R' && len == 0) {
			len += 1;
		}
		else if(s[i] == 'R' && s[i - 1] == 'R') {
			len += 1;
		}
	}
	cout << len;
	return 0;
}