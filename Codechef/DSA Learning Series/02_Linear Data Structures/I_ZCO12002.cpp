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

	int n, x, y, a, b;
	cin >> n >> x >> y;
	vector<pair<int, int>> arr;
	vector<int> V;
	vector<int> W;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}
	for(int i = 0; i < x; i++) {
		cin >> a;
		V.push_back(a);
	}
	sort(V.begin(), V.end());
	for(int i = 0; i < y; i++) {
		cin >> a;
		W.push_back(a);
	}
	sort(W.begin(), W.end());

	int minVal = 100000;
	for(int i = 0; i < n; i++){
		int s = upper_bound(V.begin(), V.end(), arr[i].first) - V.begin() - 1;
		int e = lower_bound(W.begin(), W.end(), arr[i].second) - W.begin();
		if(s >= 0 && s < x && e >= 0 && e < y) {
			minVal = min(minVal, W[e] - V[s] + 1);
		}
	}
	cout << minVal << endl;
	return 0;
}