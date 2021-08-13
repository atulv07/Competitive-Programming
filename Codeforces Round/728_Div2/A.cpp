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
		if(n % 2 == 0) {
			for(int i = 1; i <= n; i += 2) 
				cout << i + 1 << " " << i << " ";
			cout << "\n";
		}
		else {
			for(int i = 1; i < n - 3; i += 2) 
				cout << i + 1 << " " << i << " ";
			cout << n << " " << n - 2 << " " << n - 1 << "\n";
		}
	}
	return 0;
}