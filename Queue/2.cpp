#include <iostream>
using namespace std;
#define SIZE 5
class CirQueue
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
void CirQueue ::enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        cout << "Queue is full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }
}
void CirQueue ::dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}
void CirQueue ::displayfront()
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
void CirQueue ::displayQueue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            int i = front;
            while(i < SIZE)
            {
                cout<<arr[i]<<" ";
                i++;
            }
            i = 0;
            while(i <= rear)
            {
                cout<<arr[i]<<" ";
                i++;
            }
        }

        cout << endl;
    }
}
int main()
{
    CirQueue q;
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

    cout<<"-----------------------"<<endl;
    q.dequeue();
    q.displayfront();
    q.displayQueue();

    cout<<"-----------------------"<<endl;

    q.enqueue(92);
    q.displayfront();
    q.displayQueue();

    cout<<"-----------------------"<<endl;

    q.enqueue(18);
    q.displayfront();
    q.displayQueue();

    cout<<"-----------------------"<<endl;

    q.dequeue();
    q.displayfront();
    q.displayQueue();


    return 0;
}
