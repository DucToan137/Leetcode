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

bool isUnivalTree(TreeNode *root)
{
    if (!root)
    {
        return true;
    }

    int val = root->val;
    if (root->left && root->left->val != val)
    {
        return false;
    }
    if (root->right && root->right->val != val)
    {
        return false;
    }

    return isUnivalTree(root->left) && isUnivalTree(root->right);
}

int main()
{

    return 0;
}