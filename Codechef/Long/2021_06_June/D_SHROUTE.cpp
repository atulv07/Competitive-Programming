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

	int t, n, m, b;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> right(n);
		right[0] = 0;
		if(n > 1) {
			if(a[1] == 1) right[1] = 0;
			else if(a[0] == 1) right[1] = 1;
			else right[1] = -1;
		}
		for(int i = 2; i < n; i++) {
			if(a[i] == 1) {
				right[i] = 0;
			}
			else if(right[i - 1] >= 0) {
				right[i] = right[i - 1] + 1;
			}
			else {
				right[i] = -1;
			}
		}

		vector<int> left(n);
		left[n - 1] = -1;
		if(a[n - 1] == 2) left[n - 1] = 0;
		for(int i = n - 2; i > 0; i--) {
			if(a[i] == 2) {
				left[i] = 0;
			}
			else if(left[i + 1] >= 0) {
				left[i] = left[i + 1] + 1;
			}
			else {
				left[i] = -1;
			}
		}
		left[0] = 0;

		vector<int> time(n);
		for(int i = 0; i < n; i++) {
			if(right[i] == -1 && left[i] == -1) time[i] = -1;
			else if(right[i] == -1) time[i] = left[i];
			else if(left[i] == -1) time[i] = right[i];
			else time[i] = min(right[i], left[i]);
		}
		for(int i = 0; i < m; i++) {
			cin >> b;
			cout << time[b - 1] << " ";
		}
		cout << "\n";
	}
	return 0;
}