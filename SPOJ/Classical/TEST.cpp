#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	while(true) {
		cin >> n;
		if(n != 42) {
			cout << n << endl;
			fflush(stdin);
		}
		else {
			return 0;
		}
	}
}