#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(struct Node *head)
{
    struct Node *t = head;
    if (head == NULL)
        return;
    do
    {
        printf("%d ", t->data);
        t = t->next;
    } while (t != head);
}

Node *_last = NULL;

Node *insertEnd(Node *head, int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    if (head != NULL)
    {
        _last->next = node;
    }
    else
        head = node;
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

int isCircular(Node *head) {
    // Write your code here
    if (head == nullptr)
        return 1;

    Node *temp = head;

    while(temp != _last)
        temp = temp->next;

    if (temp->next == head)
        return 1;
        
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        _last = NULL;
        Node *head = NULL;
        int n, data;
        cin >> n;
        while (n--)
        {
            cin >> data;
            head = insertEnd(head, data);
        }
        int x;
        cin >> x;
        if (x == -1 && _last != NULL)
            _last->next = NULL;
        else if (head)
        {
            Node *curr = head;
            while (curr && x--)
                curr = curr->next;
            _last->next = curr;
        }
        cout << isCircular(head) << endl;
    }
    return 0;
}