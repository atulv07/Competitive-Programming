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

int k, n, m;
vector<int> a, b;
vector<int> ans;

void solve(int i, int j) {
	if(i >= n && j >= m) return;
	if(i < n && a[i] == 0) {
		i++;
		k++;
		ans.pb(0);
	}
	else if(j < m && b[j] == 0) {
		j++;
		k++;
		ans.pb(0);
	}
	else {
		if(i < n && j < m) {
			if(a[i] <= b[j]) {
				if(a[i] > k) return;
				ans.pb(a[i]);
				i++;
			}
			else {
				if(b[j] > k) return;
				ans.pb(b[j]);
				j++;
			}
		}
		else if(i < n) {
			if(a[i] > k) return;
			ans.pb(a[i]);
			i++;
		}
		else if(j < m) {
			if(b[j] > k) return;
			ans.pb(b[j]);
			j++;
		}
	}
	solve(i, j);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		cin >> k >> n >> m;
		a.resize(n);
		b.resize(m);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		int i = 0, j = 0;
		solve(i, j);
		if(ans.size() == n + m) {
			for(int i = 0; i < n + m; i++) {
				cout << ans[i] << " ";
			}
		}
		else cout << -1;
		cout << "\n";
		a.clear();
		b.clear();
		ans.clear();
	}
	return 0;
}