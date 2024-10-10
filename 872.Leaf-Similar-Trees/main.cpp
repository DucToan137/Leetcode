#include <iostream>
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

void isLeaf(TreeNode *root, vector<int> &res)
{
    if (root == nullptr)
    {
        return;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        res.push_back(root->val);
    }
    isLeaf(root->left, res);
    isLeaf(root->right, res);
}

bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
    vector<int> res1;
    vector<int> res2;
    isLeaf(root1, res1);
    isLeaf(root2, res2);
    return res1 == res2;
}

int main()
{

    return 0;
}