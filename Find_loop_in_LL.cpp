#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
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

int loopInList(Node *head)
{
    // Write your code here
    if(!head || !head->next || !head->next->next) // agr ye 3 m se ek bhi null ho gya mtlb loop nhi h
        return 0;

    Node *slow = head->next, *fast = head->next->next;

    while(fast && fast->next) { // jab tak fast ya fast->next null nhi ho jata
        if(slow == fast) // agr slow aur fast meet kr gye to loop break
            break;

        slow = slow->next; // slow with one node speed
        fast = fast->next->next; // fast with 2 nodes speed
    }

    if(!fast || !fast->next) // agr fast ya fast->next null ho gya mtlb loop nhi h
        return 0;

    // ab kyuki pta lag gya h ki loop exists. So we'll initialize a count variable from 1
    // aur fast ko vhi rkhenge
    // jab tak fast aur slow nhi milte, increment count
    int count = 1;
    slow = slow->next;

    while (slow != fast) {
        count++;
        slow = slow->next;
    }

    return count;
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *t1, *t2;
        int c, k, ans;
        cin >> n;
        while (n--)
        {
            cin >> m;
            insertEnd(&head, m);
        }
        cin >> k >> c;
        if (c > 0 && k > 0)
        {
            k--;
            c--;
            t1 = head;
            t2 = head;
            while (k--)
                t1 = t1->next;
            while (c--)
                t2 = t2->next;
            t1->next = t2;
        }
        ans = loopInList(head);
        cout << ans << endl;
    }
    return 0;
}