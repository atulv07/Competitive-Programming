#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int maxProfit = 0;
		for (int i = 0; i < n; i++) {
			int storesHave, peopleComeToBuyEachDay, vPriceOf1Piece;
			cin >> storesHave >> peopleComeToBuyEachDay >> vPriceOf1Piece;
			int temp = floor(peopleComeToBuyEachDay / (storesHave + 1)) * vPriceOf1Piece;
			if (temp > maxProfit) {
				maxProfit = temp;
			}
		}
		cout << maxProfit << endl;
	}
	return 0;
}