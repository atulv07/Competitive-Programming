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

	int a, b, c;
	cin >> a >> b >> c;
	if(a + b > c && b + c > a && a + c > b) {
		if(a == b && b == c) cout << 1;
		else if(a == b || b == c || a == c) cout << 2;
		else cout << 3;
	}
	else cout << -1;
	return 0;
}