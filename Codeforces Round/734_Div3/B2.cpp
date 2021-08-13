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

	int t, n, k, a;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<vector<int>> idxs(n);
		for(int i = 0; i < n; i++) {
			cin >> a;
			a--;
			idxs[a].pb(i);
		}
		vector<int> extra;
		vector<int> ans(n, 0);
		for(int i = 0; i < n; i++) {
			if(idxs[i].size() < k) {
				for(int j = 0; j < idxs[i].size(); j++)
					extra.pb(idxs[i][j]);
			}
			else { // idxs[i].size() >= k
				for(int j = 0; j < k; j++)
					ans[idxs[i][j]] = j + 1;
			}
		}
		int color = 1;
		int last = (extra.size() / k) * k;
		for(int i = 0; i < last; i++) {
			ans[extra[i]] = color;
			color++;
			if(color > k)
				color = 1;
		}
		for(int i = 0; i < n; i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}