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

	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i = 0; i < k - 3; i++) {
			cout << 1 << " ";
		}
		n -= (k - 3);
		if(n % 2 == 0) {
			if(n % 4 == 0) {
				cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
			}
			else {
				cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
			}
		}
		else if(n % 2 != 0) {
			cout << 1 << " " << n / 2 << " " << n / 2 << "\n";
		}
	}
	return 0;
}