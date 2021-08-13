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

	int t, xa, xb, xf, ya, yb, yf;
	cin >> t;
	while(t--) {
		cin >> xa >> ya;
		cin >> xb >> yb;
		cin >> xf >> yf;
		int dist = abs(xa - xb) + abs(ya - yb);
		if(xa == xb && xa == xf && yf > min(ya, yb) && yf < max(ya, yb))
			dist += 2;
		else if(ya == yb && ya == yf && xf > min(xa, xb) && xf < max(xa, xb))
			dist += 2;
		cout << dist << "\n";
	}
	return 0;
}