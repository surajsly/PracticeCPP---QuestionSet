// 003BubbleSort.cpp

#include<iostream>
using namespace std;

void BubbleSort(int a[], int n) {


	for (int i = 1; i < n ; i++) {
		for (int j = 0 ; j < n - i ;  j ++) {
			if (a[j] > a[j + 1]) {
				swap(a[j] , a[j + 1]);
			}
		}
	}

}

int main() {

	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	BubbleSort(a, n);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}

	return 0;
}