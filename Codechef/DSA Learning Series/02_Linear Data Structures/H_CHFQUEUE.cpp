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

	int n, k, a;
	cin >> n >> k;
	vector<int> arr;
	arr.push_back(0);
	stack<int> s;
	for(int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	unsigned long long int j = 1;
	unsigned long long int ans = 1;
	for(int i = n; i > 0; i--){
		while(!s.empty() && arr[i] <= arr[s.top()])
			s.pop();
		
		if(s.empty())
			j = 1;
		else
			j = s.top() - i + 1;
		
		s.push(i);
		
		ans = (ans * j) % 1000000007;
	}
	cout << ans << endl;
	return 0;
}