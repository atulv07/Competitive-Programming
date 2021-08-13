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

	int n, c1, c2, c3;
	cin >> n;
	vector<vector<int>> arr;
	for(int i = 0; i < n; i++) {
		cin >> c1 >> c2 >> c3;
		vector<int> ar;
		ar.pb(c1);
		ar.pb(c2);
		ar.pb(c3);
		sort(ar.begin(), ar.end());
		arr.pb(ar);
	}
	vector<bool> vis(n, false);
	int uniq = 0;
	for(int i = 0; i < n - 1; i++) {
		if(vis[i] == false) {
			bool isUniq = true;
			vis[i] = true;
			for(int j = i + 1; j < n; j++) {
				if(vis[j] == false) {
					int cnt = 0;
					for(int x = 0; x < 3; x++) {
						if(arr[i][x] == arr[j][x]) {
							cnt += 1;
						}
					}
					if(cnt == 3) {
						isUniq = false;
						vis[j] = true;
					}
				}
			}
			if(isUniq) uniq += 1;
		}
	}
	if(vis[n - 1] == false) uniq += 1;
	cout << uniq;
	return 0;
}