#include <iostream>
#include <vector>

using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] <= prices[i])
            {
                prices[i] -= prices[j];
                break;
            }
        }
    }
    return prices;
}

int main()
{
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> result = finalPrices(prices);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}