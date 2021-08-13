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

	ull t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		ull ans = 0;
		vector<ull> arr(n + 1, 1);
		for(ull i = 2; i <= n; i++) {
			ans += arr[m % i];
			for(ull j = m % i; j <= n; j += i) {
				arr[j]++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}