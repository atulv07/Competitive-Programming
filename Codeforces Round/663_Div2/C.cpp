#include<bits/stdc++.h>
using namespace std;

long long int mod = 1000000007;
inline long long int fastExpo(long long int base, long long int power, long long int modulo) {
	base %= modulo;
	if (base < 0) base += modulo;
	long long int x = base, cnt = power, ans = 1;
	while(cnt) {
		if(cnt & 1) ans = (ans * x) % modulo;
		x = (x * x) % modulo;
		cnt >>= 1;
	}
	return ans;
}

long long int takemod(long long int a, long long int mod) {
	a %= mod;
	if(a < 0) a += mod;
	return a;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<long long int> arr;
	arr.push_back(1);
	for(long long int i = 1; i <= 1000000; i++) {
		arr.push_back((arr[i - 1] * i) % mod);
	}

	long long int n;
	cin >> n;
	long long int ans = (arr[n] - fastExpo(2, n - 1, mod));
	cout << takemod(ans, mod) << "\n";
	return 0;
}