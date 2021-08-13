#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int n = s.length();
		string s1 = s.substr(0, n/2);
		string s2 = s.substr(n / 2);
		if (n % 2 != 0) {
			s2 = s2.substr(1);
		}
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if (s1 == s2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}