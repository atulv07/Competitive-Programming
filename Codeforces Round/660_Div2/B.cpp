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
		int numAdded = 0;
		int count = n / 4;
		int rem = n % 4;
		string s = "";
		s = string(count + min(1, rem), '8');
		numAdded = count + min(1, rem);
		s = string(n - numAdded, '9') + s;
		cout << s << "\n";
	}
	return 0;
}