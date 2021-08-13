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

int cntSteps(int a, int b) {
	if(a % b == 0) return a / b;
	return a / b + cntSteps(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, a, b;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		// int cnt = 0;
		// while(a != 0 && b != 0) {
		// 	if(a >= b) a -= b;
		// 	else b -= a;
		// 	cnt += 1;
		// }
		// cout << cnt << "\n";
		cout << cntSteps(a, b) << "\n";
	}
	return 0;
}