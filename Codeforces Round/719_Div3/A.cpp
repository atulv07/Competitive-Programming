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
	string s;
	cin >> t;
	while(t--) {
		cin >> n;
		cin >> s;
		unordered_set<char> us;
		us.insert(s[0]);
		bool sus = false;
		for(int i = 1; i < n; i++) {
			if(s[i] != s[i - 1]) {
				if(us.find(s[i]) == us.end()) {
					us.insert(s[i]);
				}
				else sus = true;
			} 
		}
		if(sus) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}