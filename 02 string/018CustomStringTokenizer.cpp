// 018CustomStringTokenizer.cpp

#include<iostream>
#include<cstring>

using namespace std;

char *mytokenizer(char *str , char delim ) {
	static char * input = NULL;

	if (str != NULL) {
		input = str;
	}

	if (input == NULL) {
		return NULL;
	}

	char *output = new char[strlen(input)  + 1];
	int i = 0 ;
	for ( ; input[i] != '\0' ; i++) {
		if (input[i] != delim) {
			output[i] = input[i];
		} else {
			output[i] = '\0';
			input = input + i + 1 ;
			return output;
		}
	}

	output[i] = '\0';
	input = NULL;
	return output;

}

int main() {
	char s[1000];

	cin.getline(s, 1000);

	char *ptr = mytokenizer(s, ' ');

	while (ptr != NULL) {
		cout << ptr << endl;
		ptr = mytokenizer(NULL, ' ');
	}

	return 0;
}