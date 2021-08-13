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

	string s;
	cin >> s;
	int maxLenVowels = 0;
	int currLen = 0;
	set<char> conso;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			currLen += 1;
		else {
			conso.insert(s[i]);
			maxLenVowels = max(maxLenVowels, currLen);
			currLen = 0;
		}
	}
	if(conso.size() >= 5 && maxLenVowels >= 3) 
		cout << "GOOD\n";
	else
		cout << "-1\n";
	return 0;
}