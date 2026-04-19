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
    int Diameter(TreeNode* root,int &maxPath){
        if(root==nullptr) return 0;
        int left=Diameter(root->left,maxPath);
        int right = Diameter(root->right,maxPath);
        maxPath = max(maxPath,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int path = 0;
        Diameter(root,path);
        return path;
    }
    
};


int main(){



}