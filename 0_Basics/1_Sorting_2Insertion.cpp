#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

// O(n2)
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// left portion is sorted
	// each element is added to the sorted array one by one
	vector<int> arr{4, 1, 5, 2, 3};
	int n = arr.size();
	for(int i = 1; i < n; i++) {
		int val = arr[i];
		int newPos = i;
		while(newPos > 0 && arr[i] < arr[newPos - 1])
			newPos--;
		for(int x = i; x > newPos; x--)
			arr[x] = arr[x - 1];
		arr[newPos] = val;
	}
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}