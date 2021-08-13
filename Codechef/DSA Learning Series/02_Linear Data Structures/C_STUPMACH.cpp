#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, first, second;
		cin >> n;
		cin >> first;
		long long int sum = first;
		n -= 1;
		while (n--) {
			cin >> second;
			if (second < first) {
				sum += second;
				first = second;
			}
			else {
				sum += first;
			}
		}
		cout << sum << endl;
	}
	return 0;
}