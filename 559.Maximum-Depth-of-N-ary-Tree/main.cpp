#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

int maxDepth(Node *root)
{
    if (!root)
        return 0;
    if (root->children.size() == 0)
        return 1;
    int ans = INT_MIN;
    for (auto node : root->children)
        ans = max(ans, maxDepth(node) + 1);
    return ans;
}

int main()
{

    return 0;
}