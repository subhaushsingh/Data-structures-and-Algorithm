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
    void makeParent(TreeNode* root,
                    unordered_map<TreeNode*,TreeNode*> &track_parent){

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            TreeNode *curr = q.front();
            q.pop();

            if(curr->left){
                track_parent[curr->left] = curr;
                q.push(curr->left);
            }

            if(curr->right){
                track_parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode*,TreeNode*> track_parent;
        makeParent(root, track_parent);

        unordered_map<TreeNode*,bool> visited;

        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;

        int curr_dist = 0;

        while(!q.empty()){

            int size = q.size();

            if(curr_dist++ == k)
                break;

            for(int i = 0; i < size; i++){

                TreeNode *curr = q.front();
                q.pop();

                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }

                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }

                if(track_parent[curr] &&
                   !visited[track_parent[curr]]){

                    q.push(track_parent[curr]);
                    visited[track_parent[curr]] = true;
                }
            }
        }

        vector<int> result;

        while(!q.empty()){

            TreeNode *curr = q.front();
            q.pop();

            result.push_back(curr->val);
        }

        return result;
    }
};