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

	long long int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<long long int> candies;
		vector<long long int> oranges;
		
		long long int minCan = INT_MAX;
		for(long long int i = 0; i < n; i++) {
			cin >> a;
			minCan = min(a, minCan);
			candies.push_back(a);
		}
		long long int minOr = INT_MAX;
		for(long long int i = 0; i < n; i++) {
			cin >> a;
			minOr = min(a, minOr);
			oranges.push_back(a);
		}
		long long int moves = 0;
		for(long long int i = 0; i < n; i++) {
			moves += max(candies[i] - minCan, oranges[i] - minOr);
		}
		cout << moves << "\n";
	}
	return 0;
}