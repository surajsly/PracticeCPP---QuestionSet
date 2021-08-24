// 20WavePrint.cpp

#include<iostream>
using namespace std;

int main() {
	int a[5][5];
	int m = 5, n = 5;

	int val = 1;
	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < n ; j++) {
			a[i][j] = val;
			val++;
		}
	}


	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int col = 0 ; col < n ; col ++) {
		// upward print
		if (col % 2 != 0) {
			for (int row = m - 1 ; row >= 0 ; row --) {
				cout << a[row][col] << " ";
			}
		} else { // downWard print
			for (int row = 0 ; row < m ; row++) {
				cout << a[row][col] << " ";
			}
		}
	}

	return 0;
}