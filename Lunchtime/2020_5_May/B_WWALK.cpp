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
		long long int n, a;
		cin >> n;
		vector<long long int> arr;
		for(int i = 0; i < n; i++){
			cin >> a;
			arr.push_back(a);
		}
		long long int ans = 0;
		long long int distA = 0;
		long long int distB = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			distA += arr[i];
			distB += a;
			if(distA == distB && arr[i] == a){
				ans += a;
			}
		}
		cout << ans << endl;
	}
	return 0;
}