// 015findLargestString.cpp

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char a[1000];
	char largest[1000];
	int n;
	cin >> n;
	cin.ignore();

	int len , largestLen = -1;

	for (int i = 0 ; i < n ; i ++) {
		cin.getline(a, 1000);
		len = strlen(a);
		if (len > largestLen) {
			largestLen = len;
			strcpy(largest , a);
		}
	}

	cout << largest << " " << largestLen << endl;


	return 0;
}