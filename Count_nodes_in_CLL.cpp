#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *head)
{
    Node *t = head;
    if (head == NULL)
        return;
    do
    {
        cout << t->data << ' ';
        t = t->next;
    } while (t != head);
}

Node *_last = NULL;

Node *insertEnd(Node *head, int data)
{
    Node *node = new Node();
    node->data = data;

    if (head != NULL)
    {
        _last->next = node;
    }
    else
        head = node;
    node->next = head;
    _last = node;
    return head;
}

/*
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */

int countNodes(Node *head)
{
    // Write your code here
    if (head == nullptr)
        return 0;

    if (head->next == head)
        return 1;

    Node *temp = head->next;
    int nodes = 2;

    while (temp->next != head && temp) {
        nodes++;
        temp = temp->next;
    }

    return nodes;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        int n, data;
        cin >> n;
        while (n--)
        {
            cin >> data;
            head = insertEnd(head, data);
        }
        cout << countNodes(head) << endl;
    }
    return 0;
}