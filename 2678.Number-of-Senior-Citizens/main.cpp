#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countSeniors(vector<string> &details)
{
    int count = 0;
    for (int i = 0; i < details.size(); ++i)
    {
        string age = details[i].substr(details[i].size() - 4, 2);
        if (stoi(age) > 60)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    vector<string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    cout << countSeniors(details) << endl;
    return 0;
}