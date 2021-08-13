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
	cin >> t;
	string s;
	while(t--) {
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			if(i % 2 == 0) {
				if(s[i] == 'a') s[i] = 'b';
				else s[i] = 'a';
			}
			else {
				if(s[i] == 'z') s[i] = 'y';
				else s[i] = 'z';
			}
		}
		cout << s << "\n";
	}
	return 0;
}