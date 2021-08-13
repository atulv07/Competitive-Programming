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

	int t;
	cin >> t;
	while(t--) {
		int n;
		double g, a, b;
		cin >> n;
		double ga = 0, gb = 0;
		for(int i = 0; i < n; i++) {
			cin >> g >> a >> b;
			double days = (a * b) / (a + b);
			ga += (g / a) * days;
			gb += (g / b) * days;
		}
		cout << fixed << setprecision(5);
		cout << ga << " " << gb << "\n";
	}
	return 0;
}