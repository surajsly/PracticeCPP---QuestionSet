// 21SpiralPrint.cpp


#include<iostream>
using namespace std;

void spiralPrint(int a[][5] , int m , int n) {
	int startrow = 0 ;
	int endrow = m - 1;
	int startcol = 0 ;
	int endcol = n - 1;
	int j, i;

	while (startrow <= endrow && startcol <= endcol) {
		for (j = startcol; j <= endcol; j++) {
			cout << a[startrow][j] << ", ";
		}
		startrow++;
		for (i = startrow; i <= endrow; i++) {
			cout << a[i][endcol] << ", ";
		}
		endcol--;
		if (endrow >= startrow) { ///CHANGE
			for (j = endcol; j >= startcol; j--) {
				cout << a[endrow][j] << ", ";

			}

			endrow--;

		}
		if (startcol <= endcol) { ///CHANGE
			for (i = endrow; i >= startrow; i--) {
				cout << a[i][startcol] << ", ";
			}
			startcol++;

		}
	}
	cout << "END";


}

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

	spiralPrint(a, m, n);

	return 0;
}