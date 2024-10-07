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

int rangeSumBST(TreeNode *root, int low, int high)
{
    if (!root)
    {
        return 0;
    }
    if (root->val < low)
    {
        return rangeSumBST(root->right, low, high);
    }
    else if (root->val > high)
    {
        return rangeSumBST(root->left, low, high);
    }
    else
    {
        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);

    cout << rangeSumBST(root, 7, 15) << endl;

    return 0;
}