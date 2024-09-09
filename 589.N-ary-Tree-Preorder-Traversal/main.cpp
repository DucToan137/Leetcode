#include <iostream>
#include <vector>

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

void preorder(Node *root, vector<int> &res)
{
    if (root == nullptr)
    {
        return;
    }
    res.push_back(root->val);
    for (auto child : root->children)
    {
        preorder(child, res);
    }
}

vector<int> preorder(Node *root)
{
    vector<int> res;
    preorder(root, res);
    return res;
}

int main()
{
    Node *root = new Node(1);
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(2));
    return 0;
}