#include <iostream>
#include <vector>
#include <queue>

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

void flatten(TreeNode *root)
{
    if (!root)
        return;

    flatten(root->left);
    flatten(root->right);

    TreeNode *temp = root->right;
    root->right = root->left;
    root->left = nullptr;

    while (root->right)
        root = root->right;

    root->right = temp;
}

int main()
{

    return 0;
}