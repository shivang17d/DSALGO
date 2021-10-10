#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void insert_inFront(Node**head_ref,int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void insert_After(Node* prev_node,int new_data)
{
    if(prev_node == NULL)
    {
        cout<<"The previous Node can't be NULL"<<endl;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void insert_atBack(Node** head_ref,int new_data)
{
    Node* new_node = new Node();
    Node* temp = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    /*If the Linked List is empty,
    then make the new node as head */
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}
void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl<<endl;
}
int main()
{
    // Empty Node;
    Node*head = NULL;

    insert_inFront(&head,2);
    insert_inFront(&head,3);
    insert_inFront(&head,9);
    printList(head);


    insert_atBack(&head,5);
    printList(head);
    insert_atBack(&head,7);
    printList(head);

    insert_After(head->next,11);
    printList(head);

    insert_After(head->next->next->next,56);
    printList(head);
    
    return 0;
}
