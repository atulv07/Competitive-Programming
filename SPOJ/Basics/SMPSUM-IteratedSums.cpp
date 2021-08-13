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

	long long int a, b;
	cin >> a >> b;
	long long int sum = 0;
	for(int i = a; i <= b; i++) {
		sum += (i * i);
	}
	cout << sum << endl;
	return 0;
}