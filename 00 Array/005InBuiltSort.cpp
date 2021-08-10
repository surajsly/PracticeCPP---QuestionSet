// 005InBuiltSort.cpp

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	sort(a, a + n);

	for (int index = 0 ; index < n ; index++) {
		cout << a[index] << " ";
	}



	return 0;
}