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

	long long int t, a, b, n;
	cin >> t;
	while(t--) {
		cin >> a >> b >> n;
		if(n % 3 == 1) cout << a << "\n";
		else if(n % 3 == 2) cout << b << "\n";
		else{
			long long int xorr = a ^ b;
			long long int bits = (long long int)log2(max(a, b)) + 1;
			long long int allOnes = (1LL << (bits)) - 1;
			long long int xnor = allOnes ^ xorr;
			cout << max(xorr, xnor) << "\n";
		}
	}
	return 0;
}