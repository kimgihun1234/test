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
	cout<<"asfsadfas";
	cout<<"sadfads";
	cout<<"haskdfhskd";
	cout<<"aksdjfksa";
	cout << "asdfasdf";
	cout << "asdfasd" << "\n";
}