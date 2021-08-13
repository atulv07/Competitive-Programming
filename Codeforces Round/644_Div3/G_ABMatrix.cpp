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
		int n, m, a, b;
		cin >> n >> m >> a >> b;
		if(a*n != b*m){
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			string s = "";
			for(int j = 0; j<a; j++){
				s += "1";
			}
			for(int j = 0; j<(m-a); j++){
				s += "0";
			}
			for(int i = 0; i < n; i++){
				int val = (a * i) % m;
				cout << s.substr(val) + s.substr(0, val) << endl;
			}
		}
	}
	return 0;
}