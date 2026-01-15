#include<iostream>
#include<algorithm>

using namespace std;

int board[50][50];

int main(void) {

	cin.tie(0);
	ios::sync_with_stdio(false);

	int t; cin >> t;
	int n, m; 
	for (int i = 1; i <= t; i++) {
		fill(&board[0][0], &board[50][50], 0);
		int ans = 0;
		cout << '#' << i << ' ';
		cin >> n >> m;
		for (int j = 15; j < n+15; j++) {
			for (int k = 15; k < n+15; k++) {
				cin >> board[j][k];
			}
		}
		for (int j = 15; j < n + 15; j++) {
			for (int k = 15; k < n + 15; k++) {
				int temp = 0, temp1 = board[j][k], temp2 = board[j][k];
				for (int q = 1; q < m; q++) {
					temp1 += board[j + q][k + q] + board[j - q][k - q] + board[j+q][k-q] + board[j-q][k+q];
					temp2 += board[j + q][k] + board[j - q][k] + board[j][k + q] + board[j][k - q];
					
				}
				temp = max(temp1, temp2);
				ans = max(temp, ans);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
