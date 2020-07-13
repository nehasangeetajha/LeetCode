//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3389/
/*
Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:

Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

Output: true
Example 2:

Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]

Output: false
Example 3:

Input:     1         1
          / \       / \
         2   1     1   2

        [1,2,1],   [1,1,2]

Output: false
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
    bool isSameTree(TreeNode* p, TreeNode* qu) {
        queue<TreeNode*>q;
        if(p==NULL && qu==NULL)
            return true;
        else if(p==NULL || qu==NULL)
            return false;
        
        if(p!=NULL && qu!=NULL)
        {
            q.push(p);
            q.push(qu);
        }
        while(!q.empty())
        {
            TreeNode*first = q.front();
            q.pop();
            TreeNode*second = q.front();
            q.pop();
            if(first==NULL && second ==NULL)
                continue;
            if(first==NULL || second==NULL)
                return false;
            if(first->val != second->val)
                return false;
            
            q.push(first->left);
            q.push(second->left);
            q.push(first->right);
            q.push(second->right);
        }
        return true;
    }
};
