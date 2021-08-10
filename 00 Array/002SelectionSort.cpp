// 002SelectionSort.cpp

#include<iostream>
using namespace std;

void SelectionSort(int a[] , int n) {

	for (int index = 0 ; index < n - 1 ; index++) {
		int MiniIndex = index;
		for (int j = index ; j < n ; j++ ) {
			if (a[j] < a[MiniIndex]) {
				MiniIndex = j;
			}
		}
		swap(a[MiniIndex] , a[index]);
	}


}

int main() {
	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	SelectionSort(a, n);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}

	return 0;
}