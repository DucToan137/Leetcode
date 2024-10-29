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

vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> res;
    if (root == nullptr)
        return res;
    vector<TreeNode *> queue;
    queue.push_back(root);

    while (!queue.empty())
    {
        vector<int> level;
        int size = queue.size();

        for (int i = 0; i < size; i++)
        {
            TreeNode *node = queue.front();
            queue.erase(queue.begin());
            level.push_back(node->val);

            if (node->left != nullptr)
                queue.push_back(node->left);
            if (node->right != nullptr)
                queue.push_back(node->right);
        }
        res.insert(res.begin(), level);
    }
    return res;
}

int main()
{

    return 0;
}