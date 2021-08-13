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

	long long int n, x, y;
	cin >> n;
	vector<pair<long long int, long long int>> arr;
	unordered_map<long long int, long long int> umap;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		if(x == 0 || x == 100000)
			continue;
		if(umap.find(x) == umap.end())
			umap[x] = y;
		else
			umap[x] = min(umap[x], y);
	}
	arr.push_back(make_pair(0, 500));
	arr.push_back(make_pair(100000, 500));
	for(unordered_map<long long int,long long int>::iterator it = umap.begin(); it != umap.end(); it++)
		arr.push_back(make_pair(it->first,it->second));

	sort(arr.begin(), arr.end());
	n = arr.size();
	
	long long int maxArea = -1;
	
	// adj x to up
	for(int i = 0; i < n - 1; i++) {
		maxArea = max(maxArea, 500 * (arr[i + 1].first - arr[i].first));
	}

	stack<pair<long long int, long long int>> stk;
	pair<long long int, long long int> p;
	int i = 0;
	while(i < n) {
		if(stk.empty() || arr[i].second > stk.top().second) {
			stk.push(arr[i]);
			i += 1;
		}
		else {
			p = stk.top();
			stk.pop();
			long long int x = stk.empty() ? 0 : stk.top().first;
			maxArea = max(maxArea, (arr[i].first - x) * p.second);
		}
	}
	while(!stk.empty()) {
		p = stk.top();
		stk.pop();
			
		long long int x = stk.empty() ? 0 : stk.top().first;
		maxArea = max(maxArea, (100000 - x) * p.second);
	}
	cout << maxArea << endl;
	return 0;
}