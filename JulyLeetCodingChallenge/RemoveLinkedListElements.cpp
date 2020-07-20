//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3396/
/*
Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        while(head && head->val==val)
            head=head->next;
        
        ListNode*curr = head;
        ListNode*temp = NULL;
        
        while(curr)
        {
            temp =curr;
            while(curr->next && curr->next->val == val)
            {
                curr = curr->next;
            }
            temp->next =curr->next;
            curr = curr->next;
        }
        
        return head;
    }
};
