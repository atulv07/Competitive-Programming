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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	string s;
	cin >> t;
	while(t--) {
		vector<vector<char>> board(3, vector<char>(3));
		int cntX = 0;
		int cntO = 0;
		int blank = 0;
		for(int z = 0; z < 3; z++) {
			cin >> s;
			for(int i = 0; i < 3; i++) {
				board[z][i] = s[i];
				if(s[i] == 'X') cntX += 1;
				else if(s[i] == 'O') cntO += 1;
				else blank += 1;
			}
		}
		int winX = 0;
		int winO = 0;
		char v = 'X';
		if(board[0][0] == v && board[0][1] == v && board[0][2] == v) winX += 1;
		if(board[1][0] == v && board[1][1] == v && board[1][2] == v) winX += 1;
		if(board[2][0] == v && board[2][1] == v && board[2][2] == v) winX += 1;
		if(board[0][0] == v && board[1][0] == v && board[2][0] == v) winX += 1;
		if(board[0][1] == v && board[1][1] == v && board[2][1] == v) winX += 1;
		if(board[0][2] == v && board[1][2] == v && board[2][2] == v) winX += 1;
		if(board[0][0] == v && board[1][1] == v && board[2][2] == v) winX += 1;
		if(board[0][2] == v && board[1][1] == v && board[2][0] == v) winX += 1;
		
		v = 'O';
		if(board[0][0] == v && board[0][1] == v && board[0][2] == v) winO += 1;
		if(board[1][0] == v && board[1][1] == v && board[1][2] == v) winO += 1;
		if(board[2][0] == v && board[2][1] == v && board[2][2] == v) winO += 1;
		if(board[0][0] == v && board[1][0] == v && board[2][0] == v) winO += 1;
		if(board[0][1] == v && board[1][1] == v && board[2][1] == v) winO += 1;
		if(board[0][2] == v && board[1][2] == v && board[2][2] == v) winO += 1;
		if(board[0][0] == v && board[1][1] == v && board[2][2] == v) winO += 1;
		if(board[0][2] == v && board[1][1] == v && board[2][0] == v) winO += 1;
		
		if(cntO > cntX || cntX - cntO > 1) cout << "3\n";
		else if(cntX > cntO && winX == 1 && winO == 0) cout << "1\n";
		else if(cntX == cntO && winO == 1 && winX == 0) cout << "1\n";
		else if(blank == 0 && winX + winO == 0) cout << "1\n";
		else if(blank == 0 && winX == 2) cout << "1\n";
		else if(blank > 0 && winX + winO == 0) cout << 2 << "\n";
		else cout << "3\n";
	}
	return 0;
}