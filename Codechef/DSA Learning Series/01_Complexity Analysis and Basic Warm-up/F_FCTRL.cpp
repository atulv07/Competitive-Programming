#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int count = 0;
		for (int i = 5; n / i > 0; i *= 5) {
			count += n / i;
		}
		cout << count << endl;
	}
	return 0;
}