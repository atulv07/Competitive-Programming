#include<bits/stdc++.h>
using namespace std;

int cal(const string &s, char c) {
	if(s.size() == 1) {
		return !(s[0] == c);
	}
	int mid = s.size() / 2;
	
	int L = cal(string(s.begin(), s.begin() + mid), c + 1);
	L += s.size() / 2 - count(s.begin() + mid, s.end(), c);
	
	int R = cal(string(s.begin() + mid, s.end()), c + 1);
	R += s.size() / 2 - count(s.begin(), s.begin() + mid, c);
	return min(L, R);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n;
	string s;
	cin >> t;
	while(t--) {
		cin >> n >> s;
		cout << cal(s, 'a') << "\n";
	}
	return 0;
}