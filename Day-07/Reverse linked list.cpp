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

node* reverseList(node* head) {
        node* prev_p = NULL;
        node* current_p = head;
        node* next_p;
    
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p;
        return head;
    }

void display(node* head)
{
  node* temp = head;
  while(temp)
  {
    cout<<temp->val<<" ";
    temp = temp->next;
  }
  
}

int main() {
    node* head = NULL;
    head = insertNode(head,2);
    head = insertNode(head,7);
    head = insertNode(head,11);
    head = insertNode(head,15);
    head = insertNode(head,21);
    node* newHead = reverseList(head);
    display(newHead);
  
    return 0;
}