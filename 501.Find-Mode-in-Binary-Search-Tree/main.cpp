#include <iostream>
#include <vector>
#include <unordered_map>

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

void find(TreeNode *root, unordered_map<int, int> &map)
{
    if (!root)
    {
        return;
    }
    map[root->val]++;
    find(root->left, map);
    find(root->right, map);
}

vector<int> findMode(TreeNode *root)
{
    if (!root)
    {
        return {};
    }
    unordered_map<int, int> map;
    find(root, map);
    vector<int> result;

    int max = 0;
    for (auto m : map)
    {
        if (m.second > max)
        {
            max = m.second;
        }
    }

    for (auto m : map)
    {
        if (m.second == max)
        {
            result.push_back(m.first);
        }
    }

    return result;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);

    vector<int> result = findMode(root);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}