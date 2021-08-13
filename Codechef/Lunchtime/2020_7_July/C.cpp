#include<bits/stdc++.h>
using namespace std;

string decToBin(long long int n) {
	string s = bitset<32>(n).to_string();
	const auto loc1 = s.find('1');
	if(loc1 != string::npos)
		return s.substr(loc1);
	return "0";
}

long long int bintoDec(string x) {
	string num = x;
	long long int val = 0;
	long long int base = 1;
	long long int len = num.length();
	for(long long int i = len - 1; i >= 0; i--) {
		if(num[i] == '1') {
			val += base;
		}
		base *= 2;
	}
	return val;
}

long long int binCon(string x, string y) {
	string XY = x + y;
	string YX = y + x;
	long long int xy = bintoDec(XY);
	long long int yx = bintoDec(YX);
	return max(xy - yx, yx - xy);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<string> arr;
		for(long long int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(decToBin(a));
		}
		long long int maxVal = INT_MIN;
		for(long long int i = 0; i < n - 1; i++) {
			for(long long int j = i + 1; j < n; j++) {
				long long int val = binCon(arr[i], arr[j]);
				maxVal = max(val, maxVal);
			}
		}
		cout << maxVal << "\n";
	}
	return 0;
}