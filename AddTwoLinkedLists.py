#Adds two number stored in reverse order in linked lists
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
        def addTwoNumbers(self, l1, l2):
            """
            :type l1: ListNode
            :type l2: ListNode
            :rtype: ListNode
            """
            index = 0
            sum = 0
    
            while l1 or l2:
                if l1 == None:
                    l1= ListNode(0)
                elif l2 == None:
                    l2 = ListNode(0)
                sum += (l1.val + l2.val)*10**index
                l1 = l1.next
                l2 = l2.next
                index += 1
            linkedlist = ListNode(None)
            head = linkedlist
            
            while True:
                sum, quo = divmod(sum, 10)
                linkedlist.val = quo
                if sum == 0:
                    break
                linkedlist.next = ListNode(None)
                linkedlist = linkedlist.next
            
                
            return head
            
