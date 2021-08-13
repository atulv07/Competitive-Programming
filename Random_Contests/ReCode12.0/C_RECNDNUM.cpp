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
		int n, k;
		cin >> n >> k;
		// time taken by chef to arrive n kth time
		if(n == 0) {
			cout << (k * (k - 1)) % 1000000007;
		}
		else {
			
		}
	}
	return 0;
}