# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        # initialize the pointers
        previous = head
        current = head

        while current != None and current.next != None:

            current = current.next

            # case for duplicate, change the pointers
            if previous.val == current.val:
                previous.next = current.next
                current = previous

            # otherwise, update the previous
            else:
                previous = current

        return head
