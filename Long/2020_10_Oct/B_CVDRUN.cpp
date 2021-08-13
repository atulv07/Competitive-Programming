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

	int t, n, k, x, y;
	cin >> t;
	while(t--) {
		cin >> n >> k >> x >> y;
		k %= n;
		bool found = false;
		set<int> s;
		while(!found && s.find(x) == s.end()) {
			s.insert(x);
			if(x == y) found = true;
			x += k;
			x %= n;
		}
		if(found) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}