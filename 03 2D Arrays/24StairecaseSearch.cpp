// 24StairecaseSearch.cpp

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

int StairecaseSearch(int a[][4] , int n, int key) {
	int i = 0 ;
	int j = n - 1;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key found at : " << i << " " << j << endl;
			return 1;
		}
		else if (a[i][j] < key) {
			i++;
		}
		else if (a[i][j] > key) {
			j--;
		}
	}
	return -1;

}

int main() {
	int a[][4] = {{1, 4, 8, 10}, {2, 5, 9, 15}, {6, 16, 18, 20}, {11, 17, 19, 23}};
	int n = 4;
	int key = 17;
	printmatrix(a, n);
	cout << endl << StairecaseSearch(a, n, key);

	return 0;
}