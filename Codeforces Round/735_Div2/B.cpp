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
		vector<int> arr(n + 1);
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		for(int i = 1; i <= n; i++) {
			for(int j = i + 1; j <= n; j++) {
				cout << i * j  << " " << k * (arr[i] | arr[j]) << " " << (i * j) - (k * (arr[i] | arr[j])) << "\n";
			}
		}
		cout << "\n";
	}
	return 0;
}