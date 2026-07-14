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
    void inorder(TreeNode* root,vector<int>&ans){
        if(root == NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>  ans;
        inorder(root,ans);
        return ans;
    }
};