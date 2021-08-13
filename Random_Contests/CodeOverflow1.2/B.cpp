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

	int n, x, h, q, l, r;
	cin >> n;
	unordered_map<int, vector<int>> um;
	for(int i = 0; i < n; i++) {
		cin >> x >> h;
		if(um.find(h) == um.end()) {
			vector<int> ms;
			ms.push_back(x);
			um.insert(make_pair(h, ms));
		}
		else {
			um[h].push_back(x);
		}
	}
	cin >> q;
	for(int i = 0; i < q; i++) {
		cin >> l >> r >> h;
		if(um.find(h) != um.end()) {
			vector<int> rem;
			for(int j = 0; j < um[h].size(); j++) {
				if(um[h][j] >= l && um[h][j] <= r) {
					rem.push_back(j);
				}
			}
			int siz = rem.size();
			cout << siz << "\n";
			for(int j = siz - 1; j >= 0; j--) {
				um[h].erase(um[h].begin() + rem[j]);
			}
		}
		else {
			cout << 0 << "\n";
		}
	}
	return 0;
}