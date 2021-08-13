#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, q, in;
	cin >> n >> q;
	vector<int> h;
	h.push_back(0);
	for(int i = 0; i < n; i++) {
		cin >> in;
		h.push_back(in);
	}
	vector<int> a;
	a.push_back(0);
	for(int i = 0; i < n; i++) {
		cin >> in;
		a.push_back(in);
	}

	// queries
	int b, k;
	for(int i = 0; i < q; i++) {
		cin >> in >> b >> c;
		if(in == 1) {
			a[b] = c;
		}
		else if(in == 2) {
			if(b == c) {
				cout << a[b] << "\n";
			}
			else if(h[b] <= h[c]) {
				cout << -1 << "\n";
			}
			else if(h[b] > h[c]) {
				if(b < c) {
					int taste = a[b] + a[c];
					prev = 0;
					for(int j = b; j <= c; j++) {
					}
				}
				else if(b > c) {

				}
			}
		}
	}
	return 0;
}