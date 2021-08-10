// 007BubbleSortWithComparator.cpp

#include<iostream>
using namespace std;

bool compare(int a , int b) {
	return a > b;
}

void BubbleSort(int a[], int n , bool (&cmp)(int a , int b)) {

	for (int i = 1; i < n ; i++) {
		for (int j = 0 ; j < n - i ;  j ++) {
			if (cmp(a[j + 1] , a[j ])) {
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

	BubbleSort(a, n , compare);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}

	return 0;
}