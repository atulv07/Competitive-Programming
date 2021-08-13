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
		int s, n;
		cin >> s >> n;
		int count = s / n;
		s %= n;
		if(s % 2 == 0) {
			if(s == 0) {
			}
			else {
				count += 1;
			}
		}
		else {
			if(s == 1) {
				count += 1;
			}
			else {
				count += 2;
			}
		}
		cout << count << "\n";
	}
	return 0;
}