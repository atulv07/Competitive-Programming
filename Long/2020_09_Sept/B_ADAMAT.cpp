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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr;
		arr.push_back(0);
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> a;
				if(i == 1) arr.pb(a);
			}
		}
		int cnt = 0;
		for(int i = n; i > 1; i--) {
			if(cnt % 2 == 0) {
				if(arr[i] != i) cnt += 1;
			}
			else {
				if(arr[i] == i) cnt += 1;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}