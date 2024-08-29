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

void inorderTraversal(TreeNode *root, vector<int> &res)
{
    if (root == nullptr)
    {
        return;
    }
    inorderTraversal(root->left, res);
    res.push_back(root->val);
    inorderTraversal(root->right, res);
}

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> res;
    inorderTraversal(root, res);
    return res;
}

int main()
{

    return 0;
}