#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// bool checkRecord(string s)
// {
//     int flagA = 0;
//     int flagL = 0;
//     int countA = 0;

//     if (s.size() < 2)
//     {
//         return true;
//     }
//     else
//     {
//         if (s.size() > 3)
//         {
//             for (int i = 0; i < s.size() - 2; ++i)
//             {
//                 if (s[i] == 'L')
//                 {
//                     if (s[i + 1] == 'L' && s[i + 2] == 'L')
//                     {
//                         flagL = 1;
//                     }
//                 }
//             }
//         }
//         for (int i = 0; i < s.size(); ++i)
//         {
//             if (s[i] == 'A')
//             {
//                 countA++;
//             }
//             if (countA > 1)
//             {
//                 flagA = 1;
//             }
//         }
//         if (flagA == 1 || flagL == 1)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }
// }

bool checkRecord(string s)
{
    return count(s.begin(), s.end(), 'A') < 2 && s.find("LLL") == string::npos;
}

int main()
{

    string s = "PPALLL";
    cout << checkRecord(s) << endl;
    cout << count(s.begin(), s.end(), 'A') << endl;

    return 0;
}