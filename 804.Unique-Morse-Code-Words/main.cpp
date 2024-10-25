#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
                            ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
                            ".--", "-..-", "-.--", "--.."};
    vector<string> res;
    for (auto word : words)
    {
        string temp = "";
        for (auto c : word)
        {
            temp += morse[c - 'a'];
        }
        if (find(res.begin(), res.end(), temp) == res.end())
        {
            res.push_back(temp);
        }
    }
    return res.size();
}

int main()
{

    return 0;
}