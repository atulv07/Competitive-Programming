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

	int n, d, a;
	cin >> n >> d;
	vector<vector<int>> arr;
	for(int i = 0; i < n; i++) {
		vector<int> ar(d);
		for(int j = 0; j < d; j++) {
			cin >> ar[j];
		}
		arr.pb(ar);
	}
	return 0;
}