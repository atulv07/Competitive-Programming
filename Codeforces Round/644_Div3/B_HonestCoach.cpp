#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	int t;
	cin >> t;
	while(t--) {
		int n, a;
		cin >> n;
		vector<int> arr;
		unordered_map<int, int> mapp;
		bool dupli = false;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
			if(mapp.find(a) == mapp.end()) {
				mapp.insert(make_pair(a, 1));
			}else {
				dupli = true;
			}
		}
		if(dupli) {
			cout << 0 << endl;
		}else {
			sort(arr.begin(), arr.end());
			int ans = 100000;
			for(int i = 0; i < n - 1; i++){
				if(abs(arr[i] - arr[i+1]) < ans) {
					ans = abs(arr[i] - arr[i+1]);
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}