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
		string s;
		cin >> s;
		int i = 0;
		int opened = 0;
		int bestInd = -1;
		while(i < s.length()){
			if(s[i] == '<') {
				opened += 1;
			}
			else if(s[i] == '>'){
				opened -= 1;
			}
			
			if(opened == 0) {
				bestInd = i;
			}
			if(opened < 0){
				i = s.length();
			}
			i += 1;
		}
		if(bestInd == -1){
			cout << 0 << endl;
		}
		else {
			cout << bestInd + 1 << endl;
		}
	}
	return 0;
}