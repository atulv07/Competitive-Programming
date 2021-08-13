#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		if(sum < 0) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}