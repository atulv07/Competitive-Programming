#include<bits/stdc++.h>
using namespace std;

int digitSum(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, a, b;
	cin >> t;
	while(t--) {
		cin >> n;
		int A = 0;
		int B = 0;
		for(int i = 0; i < n; i++) {
			cin >> a >> b;
			int sum1 = digitSum(a);
			int sum2 = digitSum(b);
			if(sum1 > sum2) {
				A += 1;
			}
			else if(sum1 < sum2) {
				B += 1;
			}
			else {
				A += 1;
				B += 1;
			}
		}
		if(A == B) {
			cout << 2 << " " << A << "\n";
		}
		else if(A > B) {
			cout << 0 << " " << A << "\n";
		}
		else {
			cout << 1 << " " << B << "\n";
		}
	}
	return 0;
}