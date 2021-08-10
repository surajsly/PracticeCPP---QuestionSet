// 011MaximumSumSubarray - KadanesAlgo.cpp

#include<iostream>
#include<climits>
using namespace std;

int KadanesAlgorithm(int *a, int n)
{
	int max_sum = INT_MIN;

	int sum = 0;
	int start = 0, end;
	int s, e;

	// Kadanes Algorithm

	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (sum < 0)
		{
			sum = 0;
		}

		max_sum = max(max_sum, sum);
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

	cout << KadanesAlgorithm(a, n) << endl;

	return 0;
}
