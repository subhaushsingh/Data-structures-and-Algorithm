#include <bits/stdc++.h>
using namespace std;

class Codec
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
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if(!root) return "";
        string s="";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode *curr = q.front();q.pop();
            if(curr==NULL) s.append("#,");
            else s.append(to_string(curr->val)+",");
            if(curr){
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        cout << s;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        if (data.empty())
        return nullptr;

    stringstream ss(data);
    string str;

    getline(ss, str, ',');
    
    if (str == "null")
        return nullptr;

    TreeNode* root = new TreeNode(stoi(str));

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode* node = q.front();
        q.pop();

        if (getline(ss, str, ','))
        {
            if (str != "#")
            {
                node->left = new TreeNode(stoi(str));
                q.push(node->left);
            }
        }

        if (getline(ss, str, ','))
        {
            if (str != "#")
            {
                node->right = new TreeNode(stoi(str));
                q.push(node->right);
            }
        }
    }

    return root;
    }

    void serialize_dfs(TreeNode* root, stringstream &ss) {
        if (!root) {
            ss << "n|";
            return;
        }
        ss << to_string(root->val);
        ss << "|";
        serialize_dfs(root->left, ss);
        serialize_dfs(root->right, ss);
    }

    TreeNode* des_dfs(string &data, int& ctr) {
        if (ctr >= data.size()) return nullptr;
        if (data[ctr] == 'n') {
            ctr += 2;
            return nullptr;
        }
        int sign = 1;

if (data[ctr] == '-') {
    sign = -1;
    ctr++;
}
        int num = 0;

while (data[ctr] != '|') {
    num = num * 10 + (data[ctr] - '0');
    ctr++;
}

num *= sign;
ctr++;
        TreeNode* cur = new TreeNode(num);
        cur->left = des_dfs(data, ctr);
        cur->right = des_dfs(data, ctr);
        return cur;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        stringstream ss;
        serialize_dfs(root, ss);
        return ss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int ctr = 0;
        TreeNode* root = des_dfs(data, ctr);
        return root;
    }
};