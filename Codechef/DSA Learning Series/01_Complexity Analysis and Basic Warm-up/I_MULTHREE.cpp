#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		long long int k, d0, d1;
		cin >> k >> d0 >> d1;
		k -= 2;
		long long int out = d0 + d1;
		long long int ans = out;
		long long int sum = (2 * out) % 10 + (4 * out) % 10 + (8 * out) % 10 + (6 * out) % 10;
		if (k > 0) {
			ans += out % 10;
			k -= 1;
		}
		ans += (k / 4) * sum;
		k %= 4;
		long long int p = 2;
		while (k--) {
			ans += (p * out) % 10;
			p = (p * 2) % 10;
		}
		if (ans % 3 == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}