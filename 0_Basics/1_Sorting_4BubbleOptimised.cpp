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

	vector<int> arr{4, 1, 5, 2, 3};
	int n = arr.size();
	for(int i = 0; i < n; i++) {
		bool swapDone = false;
		// in each iteration the largest element 
		// is shifted to the rightmost end
		for(int j = 0; j < n - i - 1; j++) {
			if(arr[j] > arr[j + 1]) {
				swapDone = true;
				int val = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = val;
			}
		}
		if(swapDone == false) break;
	}
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}