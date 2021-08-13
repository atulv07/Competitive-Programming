#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, x;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		// int maxN = 2;
		// int floor = 1;
		// while(maxN < n) {
		// 	maxN += x;
		// 	floor += 1;
		// }
		// cout << floor << "\n";
		if(n <= 2) cout << 1 << "\n";
		else cout << (n - 3) / x + 2 << "\n";
	}
	return 0;
}