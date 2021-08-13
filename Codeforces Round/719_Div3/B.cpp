#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

int main() {
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
		int cnt = 0;
		for(int p = 1; p <= n; p = p * 10 + 1) {
			for(int d = 1; d <= 9; d++) {
				if(d * p <= n) {
					cnt += 1;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}