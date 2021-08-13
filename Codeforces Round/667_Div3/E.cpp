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

	int t, n, k, a;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++) {
			cin >> a;
		}
		sort(arr.begin(), arr.end());
		int maxCount = 2;
		for(int i = 0; i < n - 1; i++) {
			int s = i;
			int e = i + 1;
			int cnt = 1;
			while(e < n && arr[e] <= k + arr[s]) {
				e += 1;
				cnt += 1;
			}
			for(int j = e; j < n - 1; j++) {
				s = j;
				e = j + 1;
				int tempCnt = cnt;
				while(e < n && arr[e] <= k + arr[s]) {
					e += 1;
					tempCnt += 1;
				}
				maxCount = max(maxCount, tempCnt);
			}
		}
		cout << maxCount << "\n";
	}
	return 0;
}