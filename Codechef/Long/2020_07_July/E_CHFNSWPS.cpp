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
		vector<int> A;
		vector<int> uniq;
		unordered_map<int, int> umAB;
		unordered_map<int, int> umA;
		unordered_map<int, int> umB;
		int m = INT_MAX;
		for(int i = 0; i < n; i++) {
			cin >> a;
			m = min(m, a);
			A.push_back(a);
			umA[a] += 1;
			umAB[a] += 1;
			if(umAB[a] == 1) {
				uniq.push_back(a);
			}
		}
		vector<int> B;
		for(int i = 0; i < n; i++) {
			cin >> a;
			m = min(m, a);
			B.push_back(a);
			umB[a] += 1;
			umAB[a] += 1;
			if(umAB[a] == 1) {
				uniq.push_back(a);
			}
		}

		int i = 0;
		while(i < uniq.size() && umAB[uniq[i]] % 2 == 0) {
			i += 1;
		}
		if(i != uniq.size()) {
			cout << -1 << "\n";
		}
		else {
			i = 0;
			while(i < uniq.size() && umA[uniq[i]] == umB[uniq[i]]) {
				i += 1;
			}
			if(i == uniq.size()) {
				cout << 0 << "\n";
			}
			else {
				unordered_map<int, int> um4, um5;
				for(auto j:umA) {
					if(j.second > umB[j.first])
						um4[j.first] = (j.second - umB[j.first]) / 2;
				}
				for(auto j:umB) {
					if(j.second > umA[j.first])
						um5[j.first] = (j.second - umA[j.first]) / 2;
				}
				vector<int> v1, v2;
				for(auto j:um4) {
					for(i = 0; i < j.second; i++) {
						v1.push_back(j.first);
					}
				}
				for(auto j:um5) {
					for(i = 0; i < j.second; i++) {
						v2.push_back(j.first);
					}
				}
				sort(v1.begin(), v1.end());
				sort(v2.begin(), v2.end(), greater<int>());
				long long int count = 0;
				for(int j = 0; j < v1.size(); j++) {
					count += min(2 * m, min(v1[j], v2[j]));
				}
				cout << count << "\n";
			}
		}
	}
	return 0;
}
