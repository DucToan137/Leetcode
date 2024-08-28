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

void preOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->val);
    preOrder(root->left, ans);
    preOrder(root->right, ans);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> res;
    preOrder(root, res);
    return res;
}

int main()
{

    TreeNode *root = new TreeNode(1, new TreeNode(2, new TreeNode(3), NULL), NULL);
    vector<int> res = preorderTraversal(root);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}