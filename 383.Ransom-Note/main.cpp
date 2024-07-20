#include<iostream>
#include<string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	for(int i=0;i< ransomNote.size(); ++i) {
		size_t found = magazine.find(ransomNote[i]);
		if (found != string::npos) {
			magazine.erase(found, 1);
		} else {
			return false;
		}
	}
	return true;
}

int main() {

	string ransomNote = "aa";
	string magazine = "aab";
	cout << canConstruct(ransomNote, magazine) << endl;

	return 0;
}