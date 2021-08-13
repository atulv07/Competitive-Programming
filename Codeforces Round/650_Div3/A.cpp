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
		string s1 = "";
		for(int i = 0; i < s.length(); i += 2) {
			s1 += s[i];
		}
		s1 += s[s.length() - 1];
		cout << s1 << endl;
	}
	return 0;
}