//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3378/
/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int level,vector<vector<int>>& ans){
        if(!root) return; 
        if(level == ans.size()) ans.push_back({});
        ans[level].push_back(root->val);
        dfs(root->left,level+1,ans); 
        dfs(root->right,level+1,ans);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
             return {};
        vector<vector<int>>res;
        dfs(root,0,res);
        reverse(res.begin(),res.end());
        return res;
    }
};
