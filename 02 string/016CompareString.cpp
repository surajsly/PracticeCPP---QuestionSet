// 016CompareString.cpp

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a , string b) {
	return a > b;
}

int main() {

	string s[100];

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0 ; i < n ; i++) {
		getline(cin, s[i]);
	}

	sort(s, s + n , compare);

	cout << endl;

	for (int i = 0 ; i < n ; i++) {
		cout << s[i] << endl;
	}



	return 0;
}