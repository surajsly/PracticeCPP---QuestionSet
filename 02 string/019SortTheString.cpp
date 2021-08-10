// 019SortTheString.cpp

#include<iostream>
#include <cstdlib>
#include<algorithm>
#include <string>
#include<cstring>
using namespace std;

string extractString(string str , int key) {
	char *s = strtok((char *)str.c_str(), " ");
	while (key > 1 ) {
		s = strtok(NULL, " ");
		key --;
	}
	return (string)s;
}

int strtoint(string s) {
	int ans = 0 ;
	int p = 1;
	for (int i = s.length() - 1 ; i >= 0 ; i++) {
		ans += ((s[i] - '0') * p);
		p *= 10;
	}
	return ans;
}

bool numericCompare(pair<string, string> s1 , pair<string, string> s2) {
	string key1 , key2;
	key1 = s1.second;
	key2 = s2.second;

	return strtoint(key1) < strtoint(key2);
}


bool lexioCompare(pair<string, string> s1 , pair<string, string> s2) {
	string key1 , key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;
}

int main() {
	string a[1000];
	int key;
	string reversal , ordering;

	int n;
	cin >> n;
	cin >> key;


	cin.ignore();

	getline(cin , reversal);
	getline(cin , ordering);


	for (int i = 0 ; i < n ; i++) {
		getline(cin, a[i]);
	}




	pair<string, string> strPair[1000];
	for (int i = 0 ; i < n ; i++) {
		strPair[i].first  = a[i];
		strPair[i].second = extractString(a[i], key);
	}

	if (ordering.compare("numerical") == 0) {
		sort(strPair , strPair + n , numericCompare);
	} else {
		sort(strPair , strPair + n , lexioCompare);
	}

	if (reversal.compare("true") == 0) {
		for (int i = 0 ; i <= n / 2 ; i++) {
			swap(strPair[i] , strPair[n - i - 1]);
		}
	}

	for (int i = 0 ; i < n ; i++) {
		cout << strPair[i].first << endl;
	}


	return 0;
}