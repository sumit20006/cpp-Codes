#include <iostream>
using namespace std;
class MyQueue 
{
private:
    int front, rear;
    int capacity;
    int* arr;

public:
    MyQueue(int n) 
    {
        capacity = n;
        arr = new int[capacity];
        front = rear = -1;
    }

    void enqueue(int item) 
    {
        if (rear == capacity - 1) 
        {
            cout << "Overflow" << endl;
            return;
        }

        else if (front == -1) 
        {front = 0;}

        arr[++rear] = item;
    }

    void dequeue() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Underflow" << endl;
            return;
        }

        cout << "Popped: " << arr[front++] << endl;
        if (front > rear) 
        {
            front = rear = -1;
        }
    }

    void display() 
    {
        if (front == -1) 
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~MyQueue() 
    {
        delete[] arr;
    }
};
int main() 
{
    int n, item, pops;
    cout << "Enter the size of the queue: ";
    cin >> n;

    MyQueue q(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> item;
        q.enqueue(item);
    }

    q.display();

    cout << "How many elements do you want to pop? ";
    cin >> pops;

    for (int i = 0; i < pops; i++) 
    {
        q.dequeue();
    }

    q.display();

    return 0;
}