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
	vector<int> arr;
	for(int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		int x = arr[i];
		for(int j = i + 1; j < n; j++) {
			int y = arr[j];
			if(y != x) {
				for(int k = j + 1; k < n; k++) {
					int z = arr[k];
					if(z != x && z != y && x + y > z && x + z > y && y + z > x) {
						cnt += 1;
					}
				}
			}
		}
	}
	cout << cnt;
	return 0;
}