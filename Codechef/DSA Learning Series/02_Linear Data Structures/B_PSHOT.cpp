#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		int a = 0;
		int take_a = 0;
		int b = 0;
		int take_b = 0;
		int score = 0;
		for (int i = 0; i < 2*n; i++) {
			score += 1;
			if (i % 2 == 0) {
				if (s[i] == '1') {
					a += 1;
				}
				take_a += 1;
			}
			else {
				if (s[i] == '1') {
					b += 1;
				}
				take_b += 1;
			}
			if (a - b > n - take_b || b - a > n - take_a) {
				break;
			}
		}
		cout << score << endl;
	}
	return 0;
}