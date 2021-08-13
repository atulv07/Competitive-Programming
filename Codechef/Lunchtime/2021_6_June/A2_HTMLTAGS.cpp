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
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		if(s.size() <= 3 || s[0] != '<' || s[1] != '/' || s[s.size() - 1] != '>') cout << "Error\n";
		else {
			bool prob = false;
			for(int i = 2; i < s.size() - 1 && !prob; i++) {
				if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')) continue;
				else prob = true;
			}
			if(prob) cout << "Error\n";
			else cout << "Success\n";
		}
	}
	return 0;
}