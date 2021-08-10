// 017StringTokenizer.cpp

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	char s[1000];

	cin.getline(s, 1000);

	char *ptr = strtok(s, " ");

	while (ptr != NULL) {
		cout << ptr << endl;
		ptr = strtok(NULL, " ");
	}


	return 0;
}