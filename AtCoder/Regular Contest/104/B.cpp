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

	int n;
	string s;
	cin >> n >> s;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		unordered_map<char, int> um;
		um['A'] = 0;
		um['T'] = 0;
		um['C'] = 0;
		um['G'] = 0;
		um[s[i]] += 1;
		for(int j = i + 1; j < n; j++) {
			um[s[j]] += 1;
			if(um['A'] == um['T'] && um['G'] == um['C']) {
				cnt += 1;
			}
		}
	}
	cout << cnt;
	return 0;
}