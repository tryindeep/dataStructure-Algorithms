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
    void preorder(TreeNode* root, vector<int> &ans){
        if(root == NULL) return;
        ans.push_back(root->data);
        preorder(root->left , ans);
        preorder(root->right , ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {   
      vector<int> ans;
      preorder(root, ans);
      return ans;  
    }
};