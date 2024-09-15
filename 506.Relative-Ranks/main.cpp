#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> findRelativeRanks(vector<int> &score)
{
    vector<string> result;
    vector<int> sortedScore(score);
    sort(sortedScore.begin(), sortedScore.end(), greater<int>());
    for (int i = 0; i < score.size(); i++)
    {
        int rank = find(sortedScore.begin(), sortedScore.end(), score[i]) - sortedScore.begin() + 1;
        if (rank == 1)
        {
            result.push_back("Gold Medal");
        }
        else if (rank == 2)
        {
            result.push_back("Silver Medal");
        }
        else if (rank == 3)
        {
            result.push_back("Bronze Medal");
        }
        else
        {
            result.push_back(to_string(rank));
        }
    }
    return result;
}

int main()
{
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> result = findRelativeRanks(score);
    for (string s : result)
    {
        cout << s << " ";
    }
    return 0;
}