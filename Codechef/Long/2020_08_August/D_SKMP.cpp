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
	string s, p;
	cin >> t;
	while(t--) {
		vector<int> arr(26, 0);
		cin >> s >> p;
		int ns = s.length();
		for(int i = 0; i < ns; i++) {
			arr[s[i] - 'a'] += 1;
		}
		int np = p.length();
		for(int i = 0; i < np; i++) {
			arr[p[i] - 'a'] -= 1;
		}
		string out = "";
		for(int i = 0; i < 26; i++) {
			if('a' + i == p[0]) {
				int j = 1;
				while(p[j] == p[0]) {
					j += 1;
				}
				if(p[j] < 'a' + i) {
					out += p;
					out += string(arr[i], 'a' + i);
				}
				else {
					out += string(arr[i], 'a' + i);
					out += p;
				}
			}
			else if(arr[i] > 0) {
				out += string(arr[i], 'a' + i);
			}
		}
		cout << out << "\n";
	}
	return 0;
}