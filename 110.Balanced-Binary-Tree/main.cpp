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

int height(TreeNode *node)
{
    // base case tree is empty
    if (node == NULL)
        return 0;

    // If tree is not empty then
    // height = 1 + max of left height
    // and right heights
    return 1 + max(height(node->left), height(node->right));
}

bool isBalanced(TreeNode *root)
{
    // for height of left subtree
    int lh;

    // for height of right subtree
    int rh;

    // If tree is empty then return true
    if (root == NULL)
        return 1;

    // Get the height of left and right sub trees
    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    // If we reach here then tree is not height-balanced
    return 0;
}

int main()
{

    return 0;
}