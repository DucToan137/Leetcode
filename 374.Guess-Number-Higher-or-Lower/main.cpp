#include <iostream>

using namespace std;

int guess(int num)
{
    return 0;
}

int guessNumber(int n)
{
    int start = 1;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (guess(mid) == 0)
        {
            return mid;
        }
        if (guess(mid) == -1)
        {
            end = mid;
        }
        if (guess(mid) == 1)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    return 0;
}