#include <iostream>
#include <vector>
#include <string>

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

void dfs(TreeNode *root, string temp, vector<string> &ans)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        temp += to_string(root->val);
        ans.push_back(temp);
    }

    temp += to_string(root->val) + "->";

    dfs(root->left, temp, ans);
    dfs(root->right, temp, ans);
}

vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> res;
    string temp = "";
    dfs(root, temp, res);
    return res;
}

int main()
{

    return 0;
}