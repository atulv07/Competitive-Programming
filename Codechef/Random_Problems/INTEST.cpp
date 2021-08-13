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

	int n, k, t;
	cin >> n >> k;
	int count = 0;
	for(int i = 0; i < n; i++) {
		cin >> t;
		if(t % k == 0) {
			count += 1;
		}
	}
	cout << count << "\n";
	return 0;
}