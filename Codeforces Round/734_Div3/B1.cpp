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
		unordered_map<char, int> um;
		int cnt = 0;
		int dupli = 0;
		for(int i = 0; i < s.size(); i++) {
			um[s[i]]++;
			if(um[s[i]] == 1) 
				cnt++;
			else if(um[s[i]] == 2)
				dupli++;
		}
		cnt -= dupli;
		cout << dupli + cnt / 2 << "\n";
	}
	return 0;
}