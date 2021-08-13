#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int g, i, n, q;
		cin >> g;
		for (int x = 0; x < g; x++) {
			cin >> i >> n >> q;
			int heads = 0;
			int tails = 0;
			if (n % 2 == 0) {
				heads = n / 2;
				tails = n / 2;
			}
			else {
				heads = n / 2;
				tails = n / 2 + 1;
			}
			if (i == 1) {
				if (q == 1) {
					cout << heads << endl;
				}
				else {
					cout << tails << endl;
				}
			}
			else {
				if (q == 1) {
					cout << tails << endl;
				}
				else {
					cout << heads << endl;
				}
			}
		}
	}
	return 0;
}