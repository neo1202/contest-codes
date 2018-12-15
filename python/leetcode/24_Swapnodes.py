
class ListNode:
    def __init__(self, x , next= None):
        self.val = x
        self.next = next
node1=ListNode(1,ListNode(2,ListNode(3,ListNode(4))))
p=node1
while p :
    print(p.val)
    p=p.next
class Solution:
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head!= None and head.next!=None:
            head.val,head.next.val=head.next.val,head.val
            self.swapPairs(head.next.next)
        return head
sol=Solution()
sol.swapPairs(node1)
p=node1
while p :
    print(p.val)
    p=p.next
