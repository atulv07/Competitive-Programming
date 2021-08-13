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

	int n, a;
	cin >> n;
	unordered_set<int> s;
	vector<int> arr;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(s.find(a) == s.end()) {
			s.insert(a);
			arr.pb(a);
		}
	}
	sort(all(arr));
	if(arr.size() - 2 >= 0) cout << arr[arr.size() - 2];
	else cout << "NO";
	return 0;
}