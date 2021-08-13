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

	int t, n, m, k, r, c;
	cin >> t;
	while(t--) {
		cin >> n >> m >> k;
		map<pair<int, int>, bool> um;
		vector<pair<int, int>> plant(k);
		for(int i = 0; i < k; i++) {
			cin >> plant[i].first >> plant[i].second;
			um[{plant[i].first, plant[i].second}] = true;
		}
		int ans = 0;
		for(int i = 0; i < k; i++) {
			int x = plant[i].first;
			int y = plant[i].second;
			ans += 4;
			if(um[{x - 1, y}]) ans--;
			if(um[{x, y - 1}]) ans--;
			if(um[{x + 1, y}]) ans--;
			if(um[{x, y + 1}]) ans--;
		}
		cout << ans << "\n";
	}
	return 0;
}