#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m;
		string a;
		cin >> n >> m;
		vector<string> arr;
		for(int i = 0; i < n; i++){
			cin >> a;
			arr.push_back(a);
		}
		string ans = arr[0];
		for(int i = 0; i < m; i++){
			char save = ans[i];
			for(char d = 'a'; d <= 'z'; d++){
				ans[i] = d;
				bool flag = true;
				for(int z = 0; z < n; z++){
					int errors = 0;
					for(int c = 0; c < m; c++){
						if(arr[z][c] != ans[c]){
							errors += 1;
						}
					}
					if(errors > 1){
						flag = false;
						break;
					}
				}
				if(flag){
					cout << ans << endl;
					return;
				}
			}
			ans[i] = save;
		}
		cout << "-1" << endl;
}

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
	while(t--){
		solve();
	}
	return 0;
}