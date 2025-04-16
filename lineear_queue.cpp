#include <iostream>
using namespace std;

class LinearQueue 
{
private:
    int* queue;
    int front, rear, capacity;

    void resize() {
        int newCapacity = capacity * 2;
        int* newQueue = new int[newCapacity];
        for (int i = 0; i < capacity; i++) {
            newQueue[i] = queue[i];
        }
        delete[] queue;
        queue = newQueue;
        capacity = newCapacity;
    }

public:
    LinearQueue() : front(-1), rear(-1), capacity(2) {
        queue = new int[capacity];
    }

    ~LinearQueue() {
        delete[] queue;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int value) {
        if (isEmpty()) {
            front = 0;
        }
        if (rear + 1 == capacity) {
            resize();
        }
        queue[++rear] = value;
        std::cout << value << " enqueued to the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        std::cout << queue[front] << " dequeued from the queue.\n";
        front++;
        if (front > rear) {
            front = rear = -1; // Reset the queue when empty
        }
    }
};

int main() {
    LinearQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}