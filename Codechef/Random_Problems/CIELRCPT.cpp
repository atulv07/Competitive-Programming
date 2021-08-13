#include<bits/stdc++.h>
using namespace std;

int hP2(int n) {
	for(int i = n; i >= 1; i--) {
		if((i & (i - 1)) == 0) {
			return i;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, p;
	cin >> t;
	while(t--) {
		cin >> p;
		int count = 0;
		while(p != 0) {
			if(p >= 2048) {
				p -= 2048;
			}
			else {
				p -= hP2(p);
			}
			count += 1;
		}
		cout << count << "\n";
	}
	return 0;
}