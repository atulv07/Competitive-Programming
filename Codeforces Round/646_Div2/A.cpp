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
		int n, x, a;
		cin >> n >> x;
		int even = 0;
		int odd = 0;
		for(int i = 0; i<n; i++){
			cin >> a;
			if(a % 2 == 0) {
				even += 1;
			}
			else {
				odd += 1;
			}
		}
		if(odd == 0) {
			cout << "No" << endl;
		}
		else if(odd == n){
			if(x % 2 == 0){
				cout <<"No" << endl;
			}
			else{
				cout <<"Yes" << endl;
			}
		}else if(x == n) {
			if(odd % 2 == 0) {
				cout << "No" << endl;
			}
			else {
				cout <<"Yes" << endl;
			}
		}else{
			cout << "Yes" << endl;
		}
	}
	return 0;
}