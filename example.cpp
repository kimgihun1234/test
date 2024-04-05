#include <iostream>
using namespace std;

int board[20][20] = { 0, };
int main() {
	int dice[6] = { 0, };
	int r, c, x, y,n,command;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> r >> c >> y >> x >> n;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> board[i][j];
		}
	}
	while (n--) {
		cin >> command;
	}
<<<<<<< HEAD
	cout<<"heee";
	cout<<"hwerkj"
=======
	cout<<"sdflsj";
	cout<<"asdfasd";
>>>>>>> 1570c50e7e8c5c8caa7eff8d5f2170aeb5acf687
}