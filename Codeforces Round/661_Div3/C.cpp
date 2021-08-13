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

	int t, n, w;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<pair<int, set<int>>> arr;
		for(int i = 0; i < n; i++) {
			cin >> w;
			set<int> s;
			arr.push_back(make_pair(w, s));
		}
		unordered_map<int, int> count;
		int maxCount = 0;
		for(int i = 0; i < n - 1; i++) {
			for(int j = i + 1; j < n; j++) {
				int sum = arr[i].first + arr[j].first;
				if(arr[i].second.find(sum) == arr[i].second.end() && arr[j].second.find(sum) == arr[j].second.end()) {
					arr[i].second.insert(sum);
					arr[j].second.insert(sum);
					if(count.find(sum) == count.end()) {
						count[sum] = 1;
					}
					else {
						count[sum] += 1;
					}
					maxCount = max(maxCount, count[sum]);
				}
			}
		}
		cout << maxCount << "\n";
	}
	return 0;
}