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

	int n, a;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'R') cnt += 1;
	}
	int k = cnt;
	for(int i = 0; i < k; i++) {
		if(s[i] == 'R') cnt -= 1;
	}
	cout << cnt;
	return 0;
}