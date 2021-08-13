#include<bits/stdc++.h>
using namespace std;


int reversDigits(int num) {
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	return rev_num; 
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
	while(t--) {
		int a, b;
		cin >> a >> b;
		a = reversDigits(a);
		b = reversDigits(b);
		cout << reversDigits(a + b) << endl;
	}
	return 0;
}