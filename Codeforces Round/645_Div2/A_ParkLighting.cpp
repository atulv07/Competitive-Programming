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
		int n, m;
		cin >> n >> m;
		int area = n * m;
		if(area % 2 == 0){
			cout << area / 2 << endl;
		}else{
			cout << area / 2 + 1 << endl;
		}
	}
	return 0;
}