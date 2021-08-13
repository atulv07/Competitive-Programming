#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
	if(a < b) return gcd(b, a);
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long int k;
	cin >> k;
	if(k % 7 == 0) k /= 7;
	if(gcd(10, k) != 1) {
		cout << -1;
		return 0;
	}
	long long int v = 1 % k;
	long long int len = 1;
	while(v != 0) {
		v = (10 * v + 1) % k;
		len += 1;
	}
	cout << len;
	return 0;
}