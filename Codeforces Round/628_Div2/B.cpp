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
		int n, a;
		cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++) {
			cin >> a;
			s.insert(a);
		}
		cout << s.size() << endl;
	}
	return 0;
}