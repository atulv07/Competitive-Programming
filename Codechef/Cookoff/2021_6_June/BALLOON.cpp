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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		int cnt = 0;
		bool found = false;
		int ans = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a <= 7) {
				cnt += 1;
				if(cnt == 7 && !found) {
					found = true;
					ans = i + 1;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}