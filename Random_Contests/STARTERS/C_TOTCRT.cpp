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

	int t, n, c;
	string s;
	cin >> t;
	while(t--) {
		cin >> n;
		unordered_map<string, int> um;
		for(int i = 0; i < n; i++) {
			cin >> s >> c;
			if(um.find(s) == um.end()) um[s] = 0;
			um[s] += c;
		}
		for(int i = 0; i < n; i++) {
			cin >> s >> c;
			if(um.find(s) == um.end()) um[s] = 0;
			um[s] += c;
		}
		for(int i = 0; i < n; i++) {
			cin >> s >> c;
			if(um.find(s) == um.end()) um[s] = 0;
			um[s] += c;
		}
		vector<int> arr;
		for(auto kv: um) {
			arr.pb(kv.second);
		}
		sort(all(arr));
		for(int i = 0; i < arr.size(); i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}