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

	long long int t, n;
	cin >> t;
	cout << fixed << setprecision(9);
	while(t--) {
		cin >> n;
		vector<long long int> a(n);
		long long int mx = INT_MIN;
		long long int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
			mx = max(mx, a[i]);
		}
		double ans = mx;
		ans += ((sum - mx) * 1.0) / (n - 1);
		cout << ans << "\n";
	}
	return 0;
}