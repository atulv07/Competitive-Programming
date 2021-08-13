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

	int n, a;
	cin >> n;
	vector<int> arr1, arr2;
	for(int i = 0; i < n; i++) {
		cin >> a;
		arr1.push_back(a);
	}
	for(int i = 0; i < n; i++) {
		cin >> a;
		arr2.push_back(a);
	}
	return 0;
}