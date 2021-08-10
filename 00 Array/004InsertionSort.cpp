// 004InsertionSort.cpp

#include<iostream>
using namespace std;

void InsertionSort(int a[] , int n) {

	for (int i = 1 ; i < n ; i++) {
		int element = a[i];
		int j = i - 1 ;
		while (j >= 0 and a[j] > element) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = element;
	}

}

int main() {
	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	InsertionSort(a, n);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}

	return 0;
}