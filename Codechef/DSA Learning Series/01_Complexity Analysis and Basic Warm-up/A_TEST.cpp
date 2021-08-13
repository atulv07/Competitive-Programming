#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int input;
	cin >> input;
	while (input != 42) {
		cout << input << endl;
		cin >> input;
	}
	return 0;
}