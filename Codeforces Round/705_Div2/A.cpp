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

int main(){
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
		cout << n - k + k / 2 << "\n";
		for(int i = (k + 1) / 2; i < k; i++) cout << i << " ";
		for(int i = k + 1; i <= n; i++) cout << i << " ";
		cout << "\n";
	}
	return 0;
}