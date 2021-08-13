#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int activities;
		string origin, actType;
		cin >> activities >> origin;
		int laddus = 0;
		for (int i = 0; i < activities; i++) {
			cin >> actType;
			if (actType == "CONTEST_WON") {
				int rank;
				cin >> rank;
				laddus += 300 + max(0, 20 - rank);
			}
			else if (actType == "TOP_CONTRIBUTOR") {
				laddus += 300;
			}
			else if (actType == "BUG_FOUND") {
				int severity;
				cin >> severity;
				laddus += severity;
			}
			else if (actType == "CONTEST_HOSTED") {
				laddus += 50;
			}
		}
		if (origin == "INDIAN") {
			cout << laddus / 200 << endl;
		}
		else if(origin == "NON_INDIAN") {
			cout << laddus / 400 << endl;
		}
	}
	return 0;
}