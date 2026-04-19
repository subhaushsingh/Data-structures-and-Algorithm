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
    void postorder(TreeNode *root,vector<int> &nums){
        if (root==nullptr) return;
        postorder(root->left,nums);
        postorder(root->right,nums);
        nums.emplace_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nums;
        postorder(root,nums);
        return nums;
    }
};


int main(){



}