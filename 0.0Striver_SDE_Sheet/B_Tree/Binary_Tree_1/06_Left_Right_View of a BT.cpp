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
    void solve(TreeNode* node , int level , vector<int>& ans){
        if(node == NULL) return;
        if(level == ans.size()){
            ans.push_back(node->data);
        }
        solve(node->right, level +1, ans);
        solve(node->left, level +1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
      vector<int> ans;
      solve(root , 0, ans);
      return ans;
    }
};