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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		bool first = true;
		vector<int> arr;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		int i = 0;
		while(i < n && arr[i] == 1) {
			first = !first;
			i += 1;
		}
		if(i == n) {
			if(first)
				cout << "Second\n";
			else
				cout << "First\n";
		}
		else {
			if(first)
				cout << "First\n";
			else 
				cout << "Second\n";
		}
	}
	return 0;
}