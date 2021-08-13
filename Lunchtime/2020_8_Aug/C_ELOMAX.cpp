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

	int t, n, m, r, c;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vector<int> arr;
		vector<pair<int, int>> peakRank;
		vector<pair<int, int>> peakRating;
		for(int i = 0; i < n; i++) {
			peakRank.push_back(make_pair(n + 1, 0));
			peakRating.push_back(make_pair(0, 0));
		}
		for(int i = 0; i < n; i++) {
			cin >> r;
			arr.push_back(r);
		}
		vector<vector<int>> monthly;
		for(int i = 0; i < m; i++) {
			vector<int> temp(n, 0);
			monthly.push_back(temp);
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> c;
				arr[i] += c;
				monthly[j][i] = arr[i];
				if(peakRating[i].first == 0) {
					peakRating[i].first = arr[i];
					peakRating[i].second = j;
				}
				else {
					if(arr[i] > peakRating[i].first) {
						peakRating[i].first = arr[i];
						peakRating[i].second = j;
					}
				}
			}
		}

		for(int i = 0; i < m; i++) {
			vector<int> temp;
			unordered_map<int, vector<int>> um;
			for(int j = 0; j < n; j++) {
				if(um.find(monthly[i][j]) == um.end()) {
					vector<int> tem;
					tem.push_back(j);
					temp.push_back(monthly[i][j]);
					um[monthly[i][j]] = tem;
				}
				else {
					um[monthly[i][j]].push_back(j);
				}
			}
			sort(temp.begin(), temp.end(), greater<int>());
			int rank = 1;
			for(int j = 0; j < temp.size(); j++) {
				for(int k = 0; k < um[temp[j]].size(); k++) {
					if(peakRank[um[temp[j]][k]].first > rank) {
						peakRank[um[temp[j]][k]].first = rank;
						peakRank[um[temp[j]][k]].second = i;
					}
				}
				rank += um[temp[j]].size();
			}
		}
		// cout << "Rating\n";
		// for(int i = 0; i < n; i++) {
		// 	cout << peakRating[i].first << " " << peakRating[i].second << "\n";
		// }
		// cout << "Ranking\n";
		// for(int i = 0; i < n; i++) {
		// 	cout << peakRank[i].first << " " << peakRank[i].second << "\n";
		// }
		int count = 0;
		for(int i = 0; i < n; i++) {
			if(peakRank[i].second != peakRating[i].second) {
				count += 1;
			}
		}
		cout << count << "\n";
	}
	return 0;
}