#include <iostream>
#include <cmath>

using namespace std;

bool checkPowersOfThree(int n)
{
    // Biến đổi n sang hệ cơ số 3 và kiểm tra xem các chữ số có phải chỉ là 0 và 1 nếu khác thì k biểu diễn dc
    while (n > 0)
    {
        int temp = n % 3;
        if (temp == 2)
            return false;
        n /= 3;
    }
    return true;
}

int main()
{
    cout << checkPowersOfThree(12) << endl; // 1
    cout << checkPowersOfThree(21) << endl; // 0
    return 0;
}