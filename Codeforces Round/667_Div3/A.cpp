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

	int t, a, b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a > b) {
			swap(a, b);
		}
		int diff = (b - a);
		int cnt = diff / 10;
		if(diff % 10 > 0) {
			cnt += 1;
		}
		cout << cnt << "\n";
	}
	return 0;
}