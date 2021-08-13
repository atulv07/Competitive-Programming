#include<bits/stdc++.h>
using namespace std;

bool check(int r, int g, int b, int w) {
	return (r % 2 + g % 2 + b % 2 + w % 2) <= 1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, r, g, b, w;
	cin >> t;
	while(t--) {
		cin >> r >> g >> b >> w;
		if(check(r, g, b, w) || (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 1))) cout << "Yes\n";
		else cout << "No\n";
		// int odd = 0;
		// int zero = 0;
		// if(r == 0) zero += 1;
		// if(g == 0) zero += 1;
		// if(b == 0) zero += 1;
		// if(r % 2 != 0) odd += 1;
		// if(g % 2 != 0) odd += 1;
		// if(b % 2 != 0) odd += 1;
		// if(zero == 0) {
		// 	if(odd == 0 || odd == 3) {
		// 		cout << "Yes\n";
		// 	}
		// 	else if(odd == 1) {
		// 		if(w % 2 == 0) {
		// 			cout << "Yes\n";
		// 		}
		// 		else {
		// 			cout << "No\n";
		// 		}
		// 	}
		// 	else if(odd == 2) {
		// 		if(w % 2 == 0) {
		// 			cout << "No\n";
		// 		}
		// 		else {
		// 			cout << "Yes\n";
		// 		}
		// 	}
		// }
		// else if(zero == 1) {
		// 	if(odd == 0) {
		// 		cout << "Yes\n";
		// 	}
		// 	else if(odd == 1) {
		// 		if(w % 2 == 0) {
		// 			cout << "Yes\n";
		// 		}
		// 		else {
		// 			cout << "No\n";
		// 		}
		// 	}
		// 	else if(odd == 2) {
		// 		cout << "No\n";
		// 	}
		// }
		// else if(zero == 2) {
		// 	if(odd == 0) {
		// 		cout << "Yes\n";
		// 	}
		// 	else if(odd == 1) {
		// 		if(w % 2 == 0) {
		// 			cout << "Yes\n";
		// 		}
		// 		else {
		// 			cout << "No\n";
		// 		}
		// 	}
		// }
		// else if(zero == 3) {
		// 	cout << "Yes\n";
		// }
	}
	return 0;
}