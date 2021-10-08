#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // Allocate 3 Nodes in heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 55;
    head->next = second;

    second->data = 21;
    second->next = third;

    third->data = 13;
    third->next = NULL;

    printList(head);

    return 0;
}
