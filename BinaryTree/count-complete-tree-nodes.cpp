#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    struct TreeNode
    {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;
        int lh = findLeft(root);
        int rh = findRight(root);
        if (lh == rh)
            return (1 << lh) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int findLeft(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            height++;
            node = node->left;
        }
        return height;
    }
    int findRight(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            height++;
            node = node->right;
        }
        return height;
    }
};

int main()
{
}