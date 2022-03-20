#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
struct node
{
    int data;
    node *next;
};
class LinkedList
{
public:
    node *head, *tail;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void createnode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void display()
    {
        node *temp = new node;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void rotateList(int k);
};

/* The struct for Node is
struct node
{
  int data;
  node *next;
};  */
// node *head, *tail; already created in class LinkedList
void LinkedList ::rotateList(int k) {
    if (head == nullptr || k < 1)
        return;

    node *temp = head;
    node *newHead = nullptr;

    for (int i = 1; i < k && temp; i++)
        temp = temp->next;

    if(!temp || !temp->next)
        return;

    node *newLast = temp;
    newHead = temp->next;
    temp = newHead;
    newLast->next = nullptr;


    while(temp->next)
        temp = temp->next;

    temp->next = head;
    head = newHead;
}

int main()
{
    int t, n, m, k;
    LinkedList head, t1, t2;
    cin >> n;
    while (n > 0)
    {
        cin >> m;
        head.createnode(m);
        n--;
    }
    cin >> k;
    head.rotateList(k);
    head.display();
    cout << endl;
    return 0;
}