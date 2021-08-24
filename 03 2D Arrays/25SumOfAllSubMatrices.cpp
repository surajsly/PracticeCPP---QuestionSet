// 25SumOfAllSubMatrices.cpp

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

int sumOfAllSubMatrices(int a[][4] , int n , int m) {

	int totalsum = 0 ;

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			int top_left = (i + 1) * (j + 1);
			int bottom_right = (n - i) * (m - j);
			totalsum += (top_left * bottom_right * a[i][j]);


		}
	}
	return totalsum;
}

int main() {
	// int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 10, 11}, {12, 13, 14, 15}};
	int a[][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
	int n = 4;

	printmatrix(a, n);

	cout << sumOfAllSubMatrices(a, n, n);

	return 0;
}