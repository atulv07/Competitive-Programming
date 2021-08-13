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

	long long int n, d, x, y;
	cin >> n >> d;
	long long int cnt = 0;
	for(long long int i = 0; i < n; i++) {
		cin >> x >> y;
		if(x * x + y * y <= d * d) cnt += 1;
	}
	cout << cnt;
	return 0;
}
