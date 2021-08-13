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

	int t;
	string a;
	cin >> t;
	while(t--) {
		cin >> a;
		if(a[0] == '1') cout << a[0] << '0' << a.substr(1) << "\n";
		else cout << '1' << a << "\n";
	}
	return 0;
}