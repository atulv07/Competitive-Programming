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

	int r, k;
	cin >> r >> k;
	vector<int> a(n);
	vector<int> p(n);
	for(int i = 0; i < k; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < k; i++) {
		cin >> p[i];
	}
	return 0;
}