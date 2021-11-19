// Stack is a linear data structure (LIFO)
// Stack using Array
#include <iostream>
using namespace std;
#define MAX 5
class Stack
{
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty();
    bool isFull();

    void push(int x);
    int pop();
    int peek();

    void displayStack();
};
bool Stack ::isEmpty()
{
    return (top < 0);
}
bool Stack ::isFull()
{
    return (top >= MAX - 1);
}
void Stack ::push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }
}
int Stack ::pop()
{
    if (isEmpty())
    {
        cout << "Stack UnderFlow" << endl;
        return 0;
    }
    else
    {
        int popValue = arr[top--];
        return popValue;
    }
}
int Stack ::peek()
{
    if (isEmpty())
    {
        cout << "Stack UnderFlow" << endl;
        return 0;
    }
    else
    {
        return arr[top];
    }
}
void Stack ::displayStack()
{
    cout << "Displaying Stack from top to bottom : " << endl;
    while (!isEmpty())
    {
        cout << peek() << " " << endl;
        pop();
    }
}
int main()
{
    Stack s;

    cout << "-----------------------------------------" << endl;

    if (s.isEmpty())
    {
        cout << "Stack UnderFlow" << endl;
    }

    cout << "-----------------------------------------" << endl;

    s.push(23);
    cout << "Peak Value is " << s.peek() << endl;
    s.push(9);
    cout << "Peak Value is " << s.peek() << endl;
    s.push(45);
    cout << "Peak Value is " << s.peek() << endl;
    s.push(3);
    cout << "Peak Value is " << s.peek() << endl;
    s.push(798);
    cout << "Peak Value is " << s.peek() << endl;

    cout << "-----------------------------------------" << endl;
    s.push(87);
    cout << "Peak Value is " << s.peek() << endl;
    s.push(7);
    cout << "Peak Value is " << s.peek() << endl;
    cout << "-----------------------------------------" << endl;

    if (s.isFull())
    {
        cout << "Stack Overflow" << endl;
    }
    cout << "-----------------------------------------" << endl;

    cout << "Popped Value is " << s.pop() << endl;
    cout << "Popped Value is " << s.pop() << endl;

    cout << "-----------------------------------------" << endl;

    s.displayStack();

    cout << "-----------------------------------------" << endl;

    return 0;
}
