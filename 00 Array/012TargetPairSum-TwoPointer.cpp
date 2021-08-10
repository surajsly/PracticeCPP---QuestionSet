// 012TargetPairSum - TwoPointer.cpp

#include<iostream>
using namespace std;

void TargetSumPair(int *a , int n , int key) {
	int left = 0, right = n - 1;
	while (left < right) {
		if (a[left] + a[right] == key) {
			cout << left << " " << right << endl;
			break;

		}
		else if (a[left] + a[right] > key) {
			right--;
		} else {
			left++;
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

	int key;
	cin >> key;

	TargetSumPair(a, n, key);


	return 0;
}

