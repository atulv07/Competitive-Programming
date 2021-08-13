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
		unsigned long long int a, b;
		cin >> a >> b;
		if(a == b) {
			cout << 0 << endl;
		}
		else {
			unsigned long long int ansA = 0;
			unsigned long long int ansB = 0;
			while(a % 2 == 0) {
				a /= 2;
				ansA += 1;
			}
			while(b % 2 == 0) {
				b /= 2;
				ansB += 1;
			}
			if(a != b) {
				cout << -1 << endl;
			}
			else {
				unsigned long long int power2;
				if(ansA > ansB) {
					power2 = ansA - ansB;
				}
				else {
					power2 = ansB - ansA;
				}
				unsigned long long int power8 = power2 / 3;
				power2 -= (3*power8);
				unsigned long long int power4 = power2 / 2;
				power2 -= (2*power4);
				cout << power2 + power4 + power8 << endl;
			}
		}
	}
	return 0;
}