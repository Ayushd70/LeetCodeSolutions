class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if(!head)return head;
        
        ListNode *slow=head, *fast=slow->next;

        while(fast  && fast->next)
        {
            swap(slow->val,fast->val);

            slow=fast->next;
            fast=fast->next->next;
        }

        if(slow && fast)
        {
            swap(slow->val,fast->val);
        }

        return head;
        
    }
};
