// 000LinearSearch.cpp

#include<iostream>
using namespace std;


int LinearSearch(int a[100] , int n , int key) {


	for (int index = 0 ; index < n ; index ++) {
		if (a[index] == key) {
			return index;
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

	cout << LinearSearch(a, n, key) << endl;






	return 0;
}