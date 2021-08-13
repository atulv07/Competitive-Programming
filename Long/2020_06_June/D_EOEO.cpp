#include<bits/stdc++.h>
using namespace std;

unsigned long long int highestPowerof2(unsigned long long int n) {
	unsigned long long int p = (unsigned long long int)log2(n);
	return (unsigned long long int)pow(2, p);
}

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
		unsigned long long int ts;
		cin >> ts;
		if(ts % 2 == 0) {
			unsigned long long int maxx = highestPowerof2(ts);
			unsigned long long int p2 = 0;
			unsigned long long int tst = ts;
			while(tst % 2 == 0) {
				p2 += 1;
				tst /= 2;
			}
			unsigned long long int j = pow(2, p2 + 1);
			unsigned long long int count = 0;
			while(j <= maxx) {
				unsigned long long int i = ts / j;
				if(i % 2 == 0) {
					count += i/2;
				}
				else {
					count += (i + 1) / 2;
				}
				j *= 2;
			}
			cout << count << endl;
		}
		else {
			cout << ts/2 << endl;
		}
	}
	return 0;
}