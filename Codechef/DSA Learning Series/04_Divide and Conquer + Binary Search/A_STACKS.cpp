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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr;
		cin >> a;
		arr.pb(a);
		for(int i = 1; i < n; i++) {
			cin >> a;
			int idx = upper_bound(all(arr), a) - arr.begin();
			if(idx < arr.size()) arr[idx] = a;
			else arr.pb(a);
		}
		cout << arr.size() << " ";
		for(int i = 0; i < arr.size(); i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}