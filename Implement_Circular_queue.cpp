#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class QueueArray
{
    const int SIZE = 4;
    int front = -1;
    int rear = -1;
    int *queue;

public:
    QueueArray()
    {
        queue = new int[SIZE];
    }
    void enQueue(int data);
    int deQueue();
};

// class QueueArray{
//   const int SIZE = 4; // Size of queue array
//   int front = -1; // front variable
//   int rear = -1; // rear variable
//   int *queue; // queue array
//   public:
//   	QueueArray() // constructor
//   	void enQueue(int data); // add data to the queue
//   	int deQueue(); // remove data from the queue
// };
// The above declaration is already done. Complete the function given below.

// Add data to the circular queue
void QueueArray::enQueue(int data) {
    // Write your code here
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
        return;
    
    else {
        if (front == -1)
            front++;

        rear = (rear + 1) % SIZE;
        queue[rear] = data;
    }
}

// Remove First element from queue
int QueueArray::deQueue() {
    int x;
    if (front == -1)
        return -1;

    else {
        x = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % SIZE;
            
        return x;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        QueueArray *queue = new QueueArray();
        while (n--)
        {
            int choice;
            cin >> choice;
            if (choice == 1)
            {
                int data;
                cin >> data;
                queue->enQueue(data);
            }
            else if (choice == 2)
            {
                cout << queue->deQueue() << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}