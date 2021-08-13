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

	int t, n, a, b;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> in(n + 1, 0);
		for(int i = 0; i < n - 1; i++) {
			cin >> a >> b;
			in[b]++;
		}
		int ans = 0;
		for(int i = 1; i <= n; i++) {
			if(in[i] == 0) ans++;
		}
		cout << ans - 1 << "\n";
	}
	return 0;
}