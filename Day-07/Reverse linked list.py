class Node:
    def __init__(self, num):
        self.val = num
        self.next = None

def insertNode(head, val):
    newNode = Node(val)
    
    if head is None:
        head = newNode
        return head
    
    temp = head
    while temp.next is not None:
        temp = temp.next
    
    temp.next = newNode
    return head

def reverseList(head):
    prev_p = None
    current_p = head

    while current_p:
        next_p = current_p.next
        current_p.next = prev_p

        prev_p = current_p
        current_p = next_p

    head = prev_p
    return head

def display(head):
    temp = head
    while temp:
        print(temp.val, end=" ")
        temp = temp.next

head = None
head = insertNode(head, 2)
head = insertNode(head, 7)
head = insertNode(head, 11)
head = insertNode(head, 15)
head = insertNode(head, 21)
newHead = reverseList(head)
display(newHead)
