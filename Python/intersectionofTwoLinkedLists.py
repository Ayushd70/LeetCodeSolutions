# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        d2, d1 = headB, headA
        while d2 is not d1:
            if d1 == None: d1 = headB
            else: d1 = d1.next
            
            if d2 == None: d2 = headA
            else: d2 = d2.next
        return d1
