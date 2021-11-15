#include <bits/stdc++.h>
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
    bool isEmpty();
    void push(int);
    void pop();
    void showTop();
    void display();
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
        delete (temp);
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
        cout << "Element at top is : " << top->data;
    }
    cout << endl;
}
void Stack ::display()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Displaying Stack  :  ";
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    Stack s;
    int choice, value;
    bool flag = true;
    while (flag)
    {
        cout << "\n 1.Push | 2.Pop | 3.showTop | 4.DisplayStack | 5.exit \n";
        cout << "Enter the choice  :  ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to push in the stack :  ";
            cin >> value;
            s.push(value);
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
            flag = false;
            cout<<"EXIT..."<<endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}
