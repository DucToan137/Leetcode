#include <iostream>
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

void dfs(TreeNode *node, int depth, int &maxDepth, int &sum)
{
    if (!node)
        return;

    if (depth > maxDepth)
    {
        maxDepth = depth;
        sum = node->val;
    }
    else if (depth == maxDepth)
    {
        sum += node->val;
    }

    dfs(node->left, depth + 1, maxDepth, sum);
    dfs(node->right, depth + 1, maxDepth, sum);
}

int deepestLeavesSum(TreeNode *root)
{
    int maxDepth = 0;
    int sum = 0;
    dfs(root, 0, maxDepth, sum);
    return sum;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->left->left = new TreeNode(7);

    cout << deepestLeavesSum(root) << endl;
    return 0;
}