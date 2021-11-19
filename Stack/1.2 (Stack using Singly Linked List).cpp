// Stack using Singly Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top = NULL;
    int new_data;

    bool isEmpty();
    void push(int new_data);
    void pop();
    void showTop();
    void display();
    void sizeOfStack();
};

bool Stack ::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack ::push(int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = top;
    top = new_node;
}
void Stack ::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        Node *temp = top;
        top = top->next;

        // Destroy connection between first and second
        temp->next = NULL;
        // Release memory of top node
        free(temp);
    }
}
void Stack ::showTop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Element at top is : " << top->data << endl;
    }
}
void Stack ::display()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Displaying Stack from top to bottom :  " << endl;
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " " << endl;
            temp = temp->next;
        }
    }
}
void Stack ::sizeOfStack()
{
    Node *temp = top;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"Size of the stack :  "<<cnt<<endl;
}
int main()
{
    Stack s;
    int choice;
    bool flag = true;

    while (flag)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "1.Push | 2.Pop | 3.showTop | 4.DisplayStack | 5.sizeOfStack | 6.exit " << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Enter the choice  :  ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to push into the stack :  ";
            cin >> s.new_data;
            s.push(s.new_data);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.showTop();
            break;
        case 4:
            s.display();
            break;
        case 5:
            s.sizeOfStack();
            break;
        case 6:
            flag = false;
            cout << "EXIT..." << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}
