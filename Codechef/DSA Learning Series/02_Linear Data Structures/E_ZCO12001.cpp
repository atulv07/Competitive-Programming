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

	int n, a;
	cin >> n;
	int open = 0;
	int depth = 0;
	int dPos;
	int maxx = 0;
	int maxPos;
	int count = 0;
	int pos;
	for(int i = 0; i<n; i++){
		cin >> a;
		if(open == 0){
			pos = i + 1;
			count = 0;
		}
		count += 1;
		if(a == 1){
			open += 1;
		}
		if(a == 2) {
			open -= 1;
		}
		if(open > depth){
			depth = open;
			dPos = i+1;
		}
		if(maxx < count){
			maxx = count;
			maxPos = pos;
		}
	}
	cout << depth << " " << dPos << " " << maxx << " " << maxPos << endl;
	return 0;
}