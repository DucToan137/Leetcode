#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

string interpret(string command) {
	unordered_map<string, string> m = { {"G", "G"}, {"()", "o"}, {"(al)", "al"} };
	string res = "";
	string temp = "";
	for (int i = 0; i < command.size(); i++) {
		temp += command[i];
		if (m.find(temp) != m.end()) {
			res += m[temp];
			temp = "";
		}
	}
	return res;
}

int main() {

	string command = "G()(al)";
	cout << interpret(command) << endl;

	return 0;
}