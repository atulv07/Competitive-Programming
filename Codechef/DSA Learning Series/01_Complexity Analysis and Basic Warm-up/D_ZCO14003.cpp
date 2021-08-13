#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n, a;
	cin >> n;
	vector<long long int> arr;
	long long int maxx = 0;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	for (long long int i = 0; i < n; i++) {
		if (arr[i] * (n - i) > maxx) {
			maxx = arr[i] * (n - i);
		}
	}
	cout << maxx << endl;
	return 0;
}