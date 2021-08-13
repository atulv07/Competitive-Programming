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

bool solve(string s) {
	if(s.size() == 0)
		return true;
	if(s[0] == (char)('a' + s.size() - 1))
		return solve(s.substr(1));
	else if(s[s.size() - 1] == (char)('a' + s.size() - 1))
		return solve(s.substr(0, s.size() - 1));
	else
		return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	string s;
	while(t--) {
		cin >> s;
		if(solve(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}