// Find the middle element of linked list  
// Input: 2,7,11,15
// Output: 11

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int findMiddleElement(Node * head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(7);
    head->next->next = new Node(11);
    head->next->next->next = new Node(15);

    cout << findMiddleElement(head) << endl;

    return 0;
}