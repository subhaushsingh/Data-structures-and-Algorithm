#include <bits/stdc++.h>
using namespace std;



class Solution{
    private:
    struct TreeNode{
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x,TreeNode *left,TreeNode *right) : val(x), left(left), right(right) {}
    };
    public:
    void preorder(TreeNode *root,vector<int> &nums){
        if(root==nullptr) return;
        nums.emplace_back(root->val);
        preorder(root->left,nums);
        preorder(root->right,nums);     
    }
    vector<int> preorderTraversal(TreeNode *root){
      vector<int> nums;
      preorder(root,nums);
      return nums;       
    }


};

int main(){

}