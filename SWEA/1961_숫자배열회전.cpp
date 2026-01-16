#include<iostream>
#include<algorithm>

using namespace std;

int board[10][10];

int main(void) {

	cin.tie(0);
	ios::sync_with_stdio(false);

	int t; cin >> t;
	int n; 
	for (int i = 1; i <= t; i++) {
		fill(&board[0][0], &board[10][10], 0);
		cin >> n;
		cout << '#' << i << '\n';
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> board[j][k];
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << board[n-k-1][j];
			}
			cout << ' ';
			for (int k = 0; k < n; k++) {
				cout << board[n-j-1][n - k - 1];
			}
			cout << ' ';
			for (int k = 0; k < n; k++) {
				cout << board[k][n - j - 1];
			}
			cout << '\n';
		}


	}
	return 0;
}
