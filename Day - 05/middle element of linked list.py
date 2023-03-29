class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def findMiddleElement(head):
        slow = head
        fast = head

        while(fast and fast.next):
            slow = slow.next
            fast = fast.next.next
        print(slow.data)

head = Node(2)
head.next = Node(7)
head.next.next = Node(11)
head.next.next.next = Node(15)

middle = head.findMiddleElement()
print(middle)