// 001BinarySearch.cpp

#include<iostream>
using namespace std;

int BinarySearch(int a[100] , int n , int key) {

	int start = 0 ;
	int end = n - 1 ;

	while (start <= end) {

		int mid = ( start + end ) / 2;

		if (a[mid] == key) {
			return mid;
		} else if (a[mid] > key) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}

	}

	return -1;

}


int main() {
	int a[100];
	int n , key;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	cin >> key;

	cout << BinarySearch(a, n, key);

	return 0;
}