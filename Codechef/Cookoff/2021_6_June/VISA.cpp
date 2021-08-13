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

	ll t, x1, x2, y1, y2, z1, z2;
	cin >> t;
	while(t--) {
		cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
		if((x1 <= x2) && (y1 <= y2) && (z1 >= z2)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}