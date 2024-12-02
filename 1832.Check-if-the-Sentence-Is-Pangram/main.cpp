#include<iostream>
#include<map>


using namespace std;

bool checkIfPangram(string sentence) {
    map<char, int> m;
    for(int i = 0; i < sentence.size(); i++){
        m[sentence[i]]++;
    }
    return m.size() == 26;        
}

int main(){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(sentence) << endl;   
    return 0;
}