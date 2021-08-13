#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ull k, t, n;
	cin >> k >> t;
	while(t--) {
		cin >> n;
		ull sum = 0;
		if(k == 1) sum = (n * (n + 1)) / 2;
		else if(k == 2) sum = (n * (n + 1) * (2 * n + 1)) / 6;
		else if(k == 3) sum = (n * n * (n + 1) * (n + 1)) / 4;
		else if(k == 4) sum = ((6 * n * n * n * n * n) + (15 * n * n * n * n) + (10 * n * n * n) - n) / 30;
		vector<char> arr(n + 1, '0');
		if(sum % 2 != 0) arr[1] = '1';
		ull reqSum = sum / 2;
		ull currSum = pow(n, k);
		arr[n] = '1';
		int i = n - 1;
		while(i > 1 && reqSum >= currSum) {
			while(pow(i, k) > reqSum - currSum) {
				i -= 1;
			}
			arr[i] = '1';
			currSum += pow(i, k);
			i -= 1;
		}
		for(int i = 1; i <= n; i++) {
			cout << arr[i];
		}
		cout << "\n";
	}
	return 0;
}