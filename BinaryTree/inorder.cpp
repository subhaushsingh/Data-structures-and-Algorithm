#include <bits/stdc++.h>
using namespace std;


class Solution{
    private:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x,TreeNode *left,TreeNode *right) : val(x), left(left),right(right) {}
    };
    public:
    void inorder(TreeNode *root,vector<int> &nums){
        if (root==nullptr) return;
        inorder(root->left,nums);
        nums.emplace_back(root->val);
        inorder(root->right,nums);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        inorder(root,nums);
        return nums;
    }
};


int main(){



}