#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int minn = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (i == 0) {
				minn = a;
			}
			if (minn >= a) {
				count += 1;
				minn = a;
			}
		}
		cout << count << endl;
	}
	return 0;
}