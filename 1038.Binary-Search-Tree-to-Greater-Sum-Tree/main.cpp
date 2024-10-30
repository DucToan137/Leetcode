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

int sum = 0;

TreeNode *bstToGst(TreeNode *root)
{
    if (root->right != nullptr)
    {
        bstToGst(root->right);
    }
    sum += root->val;
    root->val = sum;
    if (root->left != nullptr)
    {
        bstToGst(root->left);
    }
    return root;
}

int main()
{

    return 0;
}