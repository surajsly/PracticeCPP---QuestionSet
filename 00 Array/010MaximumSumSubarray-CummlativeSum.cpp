// 010MaximumSumSubarray - CummlativeSum.cpp
// 009MaximumsumSubarray.cpp

#include<iostream>
#include<climits>
using namespace std;


int MaximumSumSubarrayCummlativeSum(int a[], int n) {

	int max_sum = INT_MIN;

	int csum[100] = {0};

	for (int i = 1; i < n; i++)
	{
		csum[i] = a[i] + csum[i - 1];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int sum = csum[j] - csum[i - 1];
			if (sum > max_sum)
			{
				max_sum = sum;
			}
		}
	}

	return max_sum;

}

int main() {


	int a[100];
	int n ;

	cin >> n;

	for (int index = 0 ; index < n ; index++) {
		cin >> a[index];
	}

	cout << MaximumSumSubarrayCummlativeSum(a, n) << endl;

	return 0;
}
