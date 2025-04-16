#include <iostream>
using namespace std;

class CircularQueue 
{
private:
    int *queue;
    int front, rear, size, capacity;

public:
    CircularQueue(int capacity) 
    {
        this->capacity = capacity;
        queue = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    ~CircularQueue() 
    {
        delete[] queue;
    }

    bool isFull() 
    {
        return size == capacity;
    }

    bool isEmpty() 
    {
        return size == 0;
    }

    void enqueue(int value) 
    {
        if (isFull()) 
        {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }
        if (isEmpty()) 
        {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        size++;
        cout << "Enqueued: " << value << endl;
    }

    void dequeue() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued: " << queue[front] << endl;
        front = (front + 1) % capacity;
        size--;
        if (isEmpty()) 
        {
            front = -1;
            rear = -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) 
        {
            cout << queue[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(60);
    cq.enqueue(70);

    cq.display();

    return 0;
}