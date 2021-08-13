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

	int t;
	cin >> t;
	while(t--) {
		int n, a;
		cin >> n;
		vector<pair<int, bool>> arr;
		unordered_map<int, int> um;
		
		cin >> a;
		int maxx = 1;
		int maxxE = a;
		arr.push_back(make_pair(a, true));
		um.insert(make_pair(a, 1));

		for(int i = 1; i < n; i++) {
			cin >> a;
			bool selected = false;

			if(um.find(a) == um.end()) {
				um.insert(make_pair(a, 1));
				selected = true;
			}
			else {
				if(arr[i - 1].first == a) {
					if(arr[i - 1].second == false) {
						selected = true;
						um[a] += 1;
					}
				}
				else {
					selected = true;
					um[a] += 1;
				}
			}
			if(um[a] == maxx) {
				maxxE = min(a, maxxE);
			}
			else if(um[a] > maxx) {
				maxx = um[a];
				maxxE = a;
			}
			arr.push_back(make_pair(a, selected));
		}
		cout << maxx << " " << maxxE << "\n";
	}
	return 0;
}