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

	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector<vector<bool>> arr;
	for(int i = 0; i < m + 1; i++) {
		vector<bool> a(n + 1, false);
		arr.push_back(a);
	}
	arr[y][x] = true;
	cout << x << " " << y << "\n";
	for(int i = y - 1; i >= 1; i--) {
		cout << x << " " << i << "\n";
		arr[i][x] = true;
	}
	y = 1;
	for(int i = x - 1; i >= 1; i--) {
		cout << i << " " << y << "\n";
		arr[y][i] = true;
	}
	x = 1;
	int i = 1;
	while(i <= m) {
		int j = 1;
		while(j <= n) {
			if(arr[i][j] == false) {
				arr[i][j] = true;
				cout << j << " " << i << "\n";
			}
			j += 1;
		}
		j = n;
		i += 1;
		if(i <= m) {
			while(j > 0) {
				if(arr[i][j] == false) {
					arr[i][j] = true;
					cout << j << " " << i << "\n";
				}
				j -= 1;
			}
		}
		i += 1;
	}
	return 0;
}