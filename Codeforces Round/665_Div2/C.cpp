#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b > a) return gcd(b, a);
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(){
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
		cin >> n;
		int minn = INT_MAX;
		vector<int> arr;
		vector<int> tarr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
			tarr.push_back(a);
		}
		sort(tarr.begin(), tarr.end());
		bool prob = false;
		for(int i = 0; i < n; i++) {
			if(arr[i] != tarr[i] && arr[i] % tarr[0] != 0) {
				prob = true;
				break;
			}
		}
		if(prob) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}