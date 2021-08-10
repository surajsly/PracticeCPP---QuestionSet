// 009MaximumsumSubarray.cpp
#include<iostream>
#include<climits>
using namespace std;


int MaximumSumSubarray(int a[], int n) {

	int maximumSum = INT_MIN;
	for (int start = 0 ; start < n ; start++) {
		for (int end = start ; end < n ; end++) {
			int currentSum = 0;
			for (int range = start ; range < end ; range++) {
				currentSum += a[range];
			}
			if (currentSum > maximumSum  ) {
				maximumSum = currentSum;
			}
		}
	}

	return maximumSum;
}

int main() {


	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	cout << MaximumSumSubarray(a, n) << endl;

	return 0;
}
