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
		if(n % 3 == 0)
			cout << n / 3 << " " << n / 3 << "\n";
		else if((n + 1) % 3 == 0)
			cout << (n - 2) / 3 << " " << (n + 1) / 3 << "\n";
		else
			cout << (n + 2) / 3 << " " << (n - 1) / 3 << "\n";
	}
	return 0;
}