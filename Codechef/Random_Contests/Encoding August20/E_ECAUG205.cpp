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

	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int s = 1, e = *max_element(arr.begin(), arr.end()), ans = 0;
		while(s <= e) {
			int m = (s + e) / 2;
			int count = 0;
			for(int i = 0; i < n; i++) {
				count += arr[i] / m;
			}
			if(count >= k) {
				ans = max(ans, m);
				s = m + 1;
			}
			else {
				e = m - 1;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}