// https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode *temp=head;
        while(temp) {
            length+=1;
            temp=temp->next;
        }
        if(length==1) {
            return NULL;
        }
        int node=length-n+1;
        int count=1;
        temp=head;
        if(node==1 || node==0) {
            return head->next;
        }
        while(count!=(node-1)) {
            temp=temp->next;
            count++;
        }
        // cout<<length<<" "<<temp->val;
        if(temp->next->next==NULL)
            temp->next=NULL;
        else
             temp->next=temp->next->next;
        return head;
    }
};