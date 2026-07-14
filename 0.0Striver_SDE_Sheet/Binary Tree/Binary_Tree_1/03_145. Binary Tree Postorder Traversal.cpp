#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int data;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int val){
        data = val;
        left = right = NULL;
      }
};

class Solution {
public:
    void postOrder(TreeNode* root,vector<int>&ans){
        if(root == NULL) return;
        postOrder(root->left, ans);
        postOrder(root->right, ans);
        ans.push_back(root->data);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>  ans;
        postOrder(root,ans);
        return ans;
    }
};
