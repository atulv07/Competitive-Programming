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
		string exp;
		cin >> n;
		vector<int> nums;
		vector<char> operands;
		for(int i = 0; i < n; i++) {
			cin >> a;
			num.pb(a);
			if(i < n - 1) {
				char ch;
				cin >> ch;
				operands.pb(ch);
			}
		}
	}
	return 0;
}