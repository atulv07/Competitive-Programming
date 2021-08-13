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

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if(n == 1) {
			cout << 0 << "\n";
			continue;
		}
		int maxE = 1;
		int minCnt = INT_MAX;
		for(int i = 1; i <= sqrt(n); i++) {
			int cnt = i + (n - i - 1) / (i + 1);
			if((n - i - 1) % (i + 1) > 0) {
				cnt += 1;
			}
			minCnt = min(minCnt, cnt);
		}
		cout << minCnt << "\n";
	}
	return 0;
}