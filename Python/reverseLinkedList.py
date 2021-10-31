# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None: return None
        curr = head
        prev = nex = None
        while curr is not None :
            nex = curr.next
            curr.next = prev
            prev = curr
            curr = nex
        head = prev
        return head
