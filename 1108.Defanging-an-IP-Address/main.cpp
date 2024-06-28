#include<iostream>
#include<string>

using namespace std;

string defangIPaddr(string address) {
	string res = "";
	for (int i = 0; i < address.size(); ++i) {
		if (address[i] == '.')
			res += "[.]";
		else
			res += address[i];
	}

	return res;
}

int main() {

	return 0;
}