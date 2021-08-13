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
		vector<int> arr;
		unordered_map<int, int> umap1;
		unordered_map<int, int> umap2;
		for(int i = 0; i < n; i++){
			cin >> a;
			arr.push_back(a);
		}
		int count = 1;
		bool noprob = true;
		for(int i = 0; i<n; i++) {
			if(arr[i] == arr[i+1]){
				count += 1;
			}
			else {
				umap1[arr[i]] += 1;
				umap2[count] += 1;
				count = 1;
			}
		}
		for(auto i : umap1){
			if(i.second != 1){
				noprob = false;
				break;
			}
		}
		for(auto i : umap2){
			if(i.second != 1){
				noprob = false;
				break;
			}
		}
		if(noprob){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}