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
};
bool Stack ::isEmpty()
{
    return(top < 0);
}
bool Stack ::isFull()
{
    return(top >= MAX-1);
}
void Stack ::push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow"<<endl;
    }
    else
    {
        top++;
        arr[top] = x;
        cout << x << " pushed into stack"<<endl;
    }
}
int Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow"<<endl;
        return 0;
    }
    else
    {
        int popValue = arr[top];
        top--;
        return popValue;   
    }
}
int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty"<<endl;
        return 0;
    }
    else
    {
        int x = arr[top];
        return x;
    }
}

int main()
{
    class Stack s;
    if(s.isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    s.peek();
    s.push(23);
    cout<<"Peak Value is "<<s.peek()<<endl;
    s.push(11);
    cout<<"Peak Value is "<<s.peek()<<endl;
    s.push(30);
    cout<<"Peak Value is "<<s.peek()<<endl;
    s.push(10);
    cout<<"Peak Value is "<<s.peek()<<endl;
    s.push(80);
    cout<<"Peak Value is "<<s.peek()<<endl;
    if(s.isFull())
    {
        cout<<"Stack is Full"<<endl;
    }
    s.push(70);
    s.push(21);
    s.push(10);

    

    cout << s.pop() << " Popped from stack"<<endl;
    cout<<"Peak Value is "<<s.peek()<<endl;

    cout << s.pop() << " Popped from stack"<<endl;
    cout<<"Peak Value is "<<s.peek()<<endl;
    


    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
 
    return 0;
}
