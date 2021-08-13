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

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr(n);
		unordered_map<int, int> um;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			um[arr[i]] = i;
		}
		int r = n;
		for(int x = n; x > 0; x--) {
			if(um[x] >= r) continue;
			for(int i = um[x]; i < r; i++) {
				cout << arr[i] << " ";
			}
			r = um[x];
		}
		cout << "\n";
	}
	return 0;
}