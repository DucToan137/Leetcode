#include <iostream>
#include <vector>

using namespace std;

class CustomStack
{
public:
    vector<int> stack;
    int top;
    int maxSize;
    int size;

public:
    CustomStack(int maxSize)
    {
        stack.resize(maxSize);
        top = -1;
        this->maxSize = maxSize;
    }

    void push(int x)
    {
        if (top == maxSize - 1)
        {
            return;
        }
        stack[++top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        return stack[top--];
    }

    void increment(int k, int val)
    {
        int minK = min(k, top + 1);
        for (int i = 0; i < minK; i++)
        {
            stack[i] += val;
        }
    }
};

int main()
{
    return 0;
}