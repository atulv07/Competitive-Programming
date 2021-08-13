#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n;
	cin >> t;
	vector<int> arr;
	for(int i = 0; i < t; i++) {
		cin >> n;
		arr.push_back(n);
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < t; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}