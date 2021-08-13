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

	int n, m;
	cin >> n >> m;
	vector<vector<int>> mat;
	for(int i = 0; i < n; i++) {
		vector<int> ta(m, 0);
		mat.push_back(ta);
	}
	string s;
	vector<string> arr;
	for(int i = 0; i < n; i++) {
		cin >> s;
		arr.push_back(s);
	}
	int q, x1, x2, y1, y2;
	cin >> q;
	while(q--) {
		cin >> x1 >> y1 >> x2 >> y2;
		x1--;
		x2--;
		y1--;
		y2--;
		mat[x1][y1]++;
		if(x2 + 1 < n) mat[x2 + 1][y1]--;
		if(y2 + 1 < m) mat[x1][y2 + 1]--;
		if(x2 + 1 < n && y2 + 1 < m) mat[x2 + 1][y2 + 1]++;
	}
	for(int i = 0; i < m; i++) {
		for(int j = 1; j < n; j++) {
			mat[j][i] += mat[j - 1][i];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 1; j < m; j++) {
			mat[i][j] += mat[i][j - 1];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(mat[i][j] % 2 != 0) {
				if(arr[i][j] == '0') arr[i][j] = '1';
				else arr[i][j] = '0';
			}
		}
		cout << arr[i] << "\n";
	}
	return 0;
}