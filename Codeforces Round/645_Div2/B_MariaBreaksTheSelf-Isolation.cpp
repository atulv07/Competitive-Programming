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

	int t;
	cin >> t;
	while(t--) {
		int n, a;
		cin >> n;
		vector<int> arr;
		for(int i = 0; i < n; i++){
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		bool notFound = true;
		int i = n-1;
		while(i >= 0 && notFound) {
			if(arr[i] <= i + 1){
				cout << i + 2 << endl;
				notFound = false;
			}
			i -= 1;
		}
		if(notFound){
			cout << 1 << endl;
		}
	}
	return 0;
}