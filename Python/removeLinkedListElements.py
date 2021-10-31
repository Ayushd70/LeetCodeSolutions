# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        temp, prev = head, None
        while temp is not None:
            if temp.val == val:
                if prev != None:
                    prev.next = temp.next
                else:
                    head = temp.next
            else:
                prev = temp
            temp = temp.next
        return head
