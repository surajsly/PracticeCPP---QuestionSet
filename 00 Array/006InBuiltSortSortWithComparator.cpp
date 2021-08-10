// 006InBuiltSortSortWithComparator.cpp

#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a , int b) {
	return a > b;
}

int main() {
	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	sort(a, a + n, compare);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}



	return 0;
}