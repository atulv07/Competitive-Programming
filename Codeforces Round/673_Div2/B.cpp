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

	int t, n, T;
	cin >> t;
	while(t--) {
		cin >> n >> T;
		vector<int> arr(n);
		unordered_map<int, vector<int>> um;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			if(um.find(arr[i]) == um.end()) {
				vector<int> arrrrr;
				arrrrr.pb(i);
				um.insert(mp(arr[i], arrrrr));
			}
			else um[arr[i]].pb(i);
		}
		vector<int> cols(n, -1);
		for(int i = 0; i < n; i++) {
			if(cols[i] == -1) {
				if(um.find(T - arr[i]) == um.end()) {
					cols[i] = 0;
				}
				else {
					if(T - arr[i] == arr[i]) {
						for(int j = 0; j < um[arr[i]].size() / 2; j++) {
							cols[um[arr[i]][j]] = 1;
						}
						for(int j = um[arr[i]].size() / 2; j < um[arr[i]].size(); j++) {
							cols[um[arr[i]][j]] = 0;
						}
					}
					else {
						for(int j = 0; j < um[arr[i]].size(); j++) {
							cols[um[arr[i]][j]] = 0;
						}
						for(int j = 0; j < um[T - arr[i]].size(); j++) {
							cols[um[T - arr[i]][j]] = 1;
						}
					}
				}
			}
		}
		for(int i = 0; i < n; i++) {
			cout << cols[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}