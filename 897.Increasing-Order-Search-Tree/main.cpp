#include <iostream>
#include <vector>
#include <algorithm>

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

void duyet(TreeNode *root, vector<int> &res)
{
    if (!root)
    {
        return;
    }
    duyet(root->left, res);
    res.push_back(root->val);
    duyet(root->right, res);
}

TreeNode *increasingBST(TreeNode *root)
{
    if (!root)
    {
        return nullptr;
    }
    vector<int> res;
    duyet(root, res);
    sort(res.begin(), res.end());

    TreeNode *newRoot = new TreeNode(res[0]);
    TreeNode *temp = newRoot;
    for (int i = 1; i < res.size(); i++)
    {
        temp->right = new TreeNode(res[i]);
        temp = temp->right;
    }
    return newRoot;
}

int main()
{

    return 0;
}