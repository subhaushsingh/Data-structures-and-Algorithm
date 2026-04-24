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
    void recursive(TreeNode* root,vector<int> &result,int level){
        if(root==nullptr) return;
        if(level==result.size()) result.push_back(root->val);
        recursive(root->right,result,level+1);
        recursive(root->left,result,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        recursive(root,result,0);
        return result;
    }

};

int main(){

}