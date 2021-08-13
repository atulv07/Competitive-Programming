#include<bits/stdc++.h>
using namespace std;

int ans = 0;

void ways(int num, int x, int k, int n) {
	if(x == 0) ans++;
	int lim = (int)floor(pow(num, 1.0/n));
	for(int i = k + 1; i <= lim; i++) {
		if((x - (int)pow(i, n)) >= 0) {
			ways(num, x - (int)pow(i, n), i, n);
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

	int x, n;
	cin >> x >> n;
	ways(x, x, 0, n);
	cout << ans;
	return 0;
}