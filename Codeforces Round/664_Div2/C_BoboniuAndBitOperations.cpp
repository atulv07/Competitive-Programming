#include<bits/stdc++.h>
using namespace std;

bool check(int x, vector<int> arr, vector<int> arr2, int n, int m) {
	for(int i = 0; i < n; i++) {
		bool flag = false;
		for(int j = 0; j < m; j++) {
			int res = arr[i] & arr2[j];
			if((res | x) == x) {
				flag = true;
				break;
			}
		}
		if(!flag) return false;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, m, a;
	cin >> n >> m;
	vector<int> arr;
	vector<int> arr2;
	for(int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	for(int i = 0; i < m; i++) {
		cin >> a;
		arr2.push_back(a);
	}
	int st = 0;
	for(int i = 0; i < n; i++) {
		st |= arr[i];
	}
	for(int ans = 0; ans <= st; ans++) {
		if(check(ans, arr, arr2, n, m)) {
			cout << ans;
			return 0;
		}
	}
	return 0;
}