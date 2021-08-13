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

	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		unordered_map<int, int> um;
		vector<int> arr(n, 0);
		int minnNotAvail = 0;
		int maxx = -1;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			if(um.find(arr[i]) == um.end()) {
				um.insert({arr[i], 0});
			}
			um[arr[i]] += 1;
			maxx = max(arr[i], maxx);
		}
		while(um.find(minnNotAvail) != um.end()) {
			minnNotAvail += 1;
		}
		if(k == 0) {
			cout << n << "\n";
		}
		else {
			int newVal = ceil(float(maxx + minnNotAvail) / 2);
			if(newVal > maxx) {
				cout << n + k << "\n";
			}
			else {
				if(um.find(newVal) == um.end()) {
					cout << n + 1 << "\n";
				}
				else {
					cout << n << "\n";
				}
			}
		}
	}
	return 0;
}