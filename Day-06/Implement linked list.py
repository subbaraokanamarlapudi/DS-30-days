class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def insertNode(head, val):
    newNode = Node(val)
    if head == None:
        head = newNode
        return head
    temp = head
    while temp.next != None:
        temp = temp.next
    temp.next = newNode
    return head

def findMiddle(head: Node):
  slow = head
  fast = head
  while fast and fast.next:
    slow = slow.next
    fast = fast.next.next
  print(slow.val)


if __name__ == "__main__":
    head = None
    head = insertNode(head, 2)
    head = insertNode(head, 7)
    head = insertNode(head, 11)
    head = insertNode(head, 15)
    findMiddle(head)