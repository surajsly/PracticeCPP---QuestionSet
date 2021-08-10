// 014RemoveDuplicate.cpp

#include<iostream>
#include<cstring>
using namespace std;

void RemoveDuplicate(char *a) {
	int prev = 0 ;
	int end  = strlen(a);
	if (end == 1 or end == 0) {
		return ;
	}
	for (int index = 0 ; index < end ; index++) {
		if (a[index] != a[prev]) {
			prev++;
			a[prev] = a[index];
		}
	}
	a[prev + 1 ] = '\0';
}

int main() {
	char a[1000];

	cin.getline(a, 1000, '\n');

	RemoveDuplicate(a);

	cout << a;

	return 0;
}