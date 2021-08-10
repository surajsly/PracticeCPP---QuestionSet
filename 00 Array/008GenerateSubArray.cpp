// 008GenerateSubArray.cpp

#include<iostream>
using namespace std;

void GenerateSubArray(int a[], int n) {

	for (int start = 0 ; start < n ; start++) {
		for (int end = start ; end < n ; end++) {
			for (int range = start ; range < end ; range++) {
				cout << a[range] << " ";
			}
			cout << endl;
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

	GenerateSubArray(a, n);



	return 0;
}