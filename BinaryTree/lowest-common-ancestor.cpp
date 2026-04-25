#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0),left(nullptr),right(nullptr) {}
        TreeNode(int x) : val(x),left(nullptr),right(nullptr) {}
        TreeNode(int x,TreeNode *left,TreeNode *right) : val(x),left(left),right(right) {}
    };

    public:

        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          if(root==nullptr||root==p||root==q) return root;
          TreeNode* left = lowestCommonAncestor(root->left,p,q);
          TreeNode* right = lowestCommonAncestor(root->right,p,q);
          if(!left) return right;
          else if(!right) return left;
          else return root;
    }

};

int main(){

}