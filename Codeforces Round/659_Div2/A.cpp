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
		string s(200, 'a');
		cout << s << "\n";
		for(int i = 0; i < n; i++) {
			cin >> a;
			s[a] = (s[a] == 'a') ? 'b' : 'a';
			cout << s << "\n";
		}
	}
	return 0;
}