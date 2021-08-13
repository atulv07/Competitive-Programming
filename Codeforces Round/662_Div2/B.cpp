#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
	int n, q, a;
	cin >> n;
	unordered_map<int, int> um;
	for(int i = 0; i < n; i++) {
		cin >> a;
		um[a] += 1;
	}
	int sq = 0;
	int recPairs = 0;
	for(auto x : um) {
		sq += (x.second / 4);
		recPairs += ((x.second % 4) / 2);
	}
	cin >> q;
	char c;
	for(int i = 0; i < q; i++) {
		cin >> c >> a;
		int SQ = um[a] / 4;
		int REC = (um[a] % 4) / 2;
		if(c == '+') {
			um[a] += 1;
		}
		else if(c == '-') {
			um[a] -= 1;
		}
		int newSQ = um[a] / 4;
		int newREC = (um[a] % 4) / 2;
		sq += (newSQ - SQ);
		recPairs += (newREC - REC);
		if(sq >= 2 || recPairs >= 4 || (sq >= 1 && recPairs >= 2)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}