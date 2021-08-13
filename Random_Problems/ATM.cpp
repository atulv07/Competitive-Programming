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

	int x;
	cin >> x;
	double y;
	cin >> y;
	cout << fixed << setprecision(2);
	if(x % 5 == 0 && x + 0.5 <= y) {
		cout << y - x - 0.50 << "\n";
	}
	else {
		cout << y << "\n";
	}
	return 0;
}