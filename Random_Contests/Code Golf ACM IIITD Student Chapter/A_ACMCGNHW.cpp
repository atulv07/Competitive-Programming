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

	int n;
	string s;
	cin >> n;
	while(n--) {
		cin >> s;
		int cnt = 0;
		unordered_set<char> us;
		for(int i = 0; i < s.size(); i++) {
			if(us.find(s[i]) == us.end()) {
				us.insert(s[i]);
				cnt += 1;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}