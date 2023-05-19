#include<iostream>
using namespace std;

class node {
    public:
        int val;
        node* next;
        node(int num) {
            val = num;
            next = NULL;
        }
};

node* insertNode(node* head,int val) {
    node* newNode = new node(val);
    
    if(head == NULL) {
        head = newNode;
        return head;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return head;
}

void findMiddle(node* head)
{
  node* slow = head;
  node* fast = head;

  while(fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  cout<<slow->val;
  
}

int main() {
    node* head = NULL;
    head = insertNode(head,2);
    head = insertNode(head,7);
    head = insertNode(head,11);
    head = insertNode(head,15);
    head = insertNode(head,21);
    findMiddle(head);
  
    return 0;
}