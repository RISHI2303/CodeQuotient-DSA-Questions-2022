#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void forwardPrint(struct Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    forwardPrint(head->next);
}

void insertEnd(Node **head, int data)
{
    Node *node = new Node();
    Node *last = *head;
    node->data = data; //  Insert data in new node
    node->next = NULL; // link new node to NULL as it is last node
    if (*head == NULL) // if list is empty add in beginning.
    {
        *head = node;
        return;
    }
    while (last->next != NULL) // Find the last node
        last = last->next;
    last->next = node; // Add the node after the last node of list
    return;
}

/* struct Node
{
    int data;
    Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

int getCount(Node *head) {
    Node *temp = head;
    int count = 0;

    while(temp) {
        count++;
        temp = temp->next;
    }

    return count;
}

Node* mergePoint(Node *head1, Node *head2, int diff) {
    Node *temp1 = head1, *temp2 = head2;

    while(diff--)
        temp1 = temp1->next;

    while(temp1 && temp2) {
        if(temp1 == temp2)
            return temp1;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return nullptr;
}

Node *findMergePoint(Node *head1, Node *head2)
{
    // Write your code here
    int cnt1 = getCount(head1);
    int cnt2 = getCount(head2);
    int diff = abs(cnt1 - cnt2);

    if(cnt1 > cnt2)
        return mergePoint(head1, head2, diff);
    else
        return mergePoint(head2, head1, diff);
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        Node *head1 = NULL, *head2 = NULL;
        Node *t1, *t2;
        int k, ans;
        cin >> n;
        while (n--)
        {
            cin >> m;
            insertEnd(&head1, m);
        }
        cin >> n;
        while (n--)
        {
            cin >> m;
            insertEnd(&head2, m);
        }
        cin >> k;
        if (k > 0)
        {
            Node *t1 = head1;
            while (k--)
                t1 = t1->next;
            Node *t2 = head2;
            while (t2->next != NULL)
                t2 = t2->next;
            t2->next = t1;
        }
        Node *t3 = findMergePoint(head1, head2);
        forwardPrint(t3);
        cout << endl;
    }
    return 0;
}