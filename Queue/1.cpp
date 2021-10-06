#include <iostream>
using namespace std;
#define SIZE 5
class Queue
{
    int arr[SIZE];
    int front = -1;
    int rear = -1;

public:
    void enqueue(int value);
    void dequeue();
    void displayfront();
    void displayQueue();
};
void Queue ::enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue is full" << endl;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = value; 
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}
void Queue ::dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    
}
void Queue ::displayfront()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Element at front is : " << arr[front] << endl;
    }
}
void Queue ::displayQueue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(1);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(9);
    q.displayQueue();

    q.enqueue(88);
    q.displayQueue();

    q.displayfront();
    q.dequeue();
    q.displayfront();
    q.displayQueue();


    q.dequeue();
    q.displayfront();
    q.displayQueue();

    return 0;
}
