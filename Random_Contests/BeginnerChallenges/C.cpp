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

	long long int n, a;
	cin >> n;
	vector<long long int> arr;
	for(long long int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	long long int minLoss = LONG_MAX;
	for(long long int i = 0; i < n; i++) {
		for(long long int j = 0; j < i; j++) {
			if(arr[j] > arr[i]) minLoss = min(minLoss, arr[j] - arr[i]);
		}
	}
	cout << minLoss << "\n";
	return 0;
}