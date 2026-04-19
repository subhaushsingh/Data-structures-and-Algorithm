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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> curr;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
                q.pop();
                curr.push_back(node->val);
            }
            ans.push_back(curr);
        }
        return ans;    
    }
};


int main(){



}