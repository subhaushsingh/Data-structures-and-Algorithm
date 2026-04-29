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

    int widthOfBinaryTree(TreeNode* root) {
        if (root==nullptr) return 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int ans = 0;
        while(!q.empty()){
            int mmin = q.front().second;
            int size = q.size();
            int first,last;
            for(int i=0;i<size;i++){
                int curr_id =  q.front().second-mmin;
                TreeNode *node = q.front().first;
                q.pop();
                if(i==0) first=curr_id;
                if(i==size-1) last=curr_id;
                if(node->left){
                    q.push({node->left,(long long)curr_id*2+1});
                }
                if(node->right){
                    q.push({node->right,(long long)curr_id*2+2});
                }
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};


int main(){



}