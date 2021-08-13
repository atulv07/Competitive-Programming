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

	int a, n, k;
	cin >> a >> n >> k;
	vector<int> arr(k, 0);
	for(int i = 0; i < k; i++) {
		arr[i] = a % (n + 1);
		a /= (n + 1);
	}
	for(int i = 0; i < k; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}