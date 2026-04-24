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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr) return result;
        bool flag=true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> curr(size);
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                int index = flag ? i : (size-1-i);
                curr[index] = node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            flag = !flag;
            result.push_back(curr);
        }
        return result;      
    }

};

int main(){

}