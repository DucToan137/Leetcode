#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void leaf(TreeNode *root, vector<int> &res, string s)
{
    if (root == nullptr)
        return;
    s += to_string(root->val);
    if (root->left == nullptr && root->right == nullptr)
    {
        res.push_back(stoi(s));
        return;
    }
    leaf(root->left, res, s);
    leaf(root->right, res, s);
}

int sumNumbers(TreeNode *root)
{
    vector<int> res;
    string s = "";
    leaf(root, res, s);
    int sum = 0;
    for (int i = 0; i < res.size(); i++)
    {
        sum += res[i];
    }
    return sum;
}

int main()
{
    return 0;
}