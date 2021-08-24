// 23RoatateImageAntiClockWise.cpp



#include<iostream>
using namespace std;

void printmatrix(int a[][4] , int n) {
	cout << endl;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void rotate(int a[][4] , int n) {
	for (int i = 0 ; i < n ; i++) {
		int start_col = 0 ;
		int end_col = n - 1;
		while (start_col < end_col) {
			swap(a[i][start_col] , a[i][end_col]);
			start_col++;
			end_col--;
		}
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = i ; j < n ; j++) {
			swap(a[i][j] , a[j][i]);
		}
	}

	printmatrix(a, n);
}


int main() {
	int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 10, 11}, {12, 13, 14, 15}};
	int n = 4;

	printmatrix(a, n);
	rotate(a, n);

	return 0;
}