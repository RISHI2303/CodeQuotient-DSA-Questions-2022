#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void forwardPrint(struct Node *head) {
    if (head == NULL)
        return;

    cout << head->data << " ";
    forwardPrint(head->next);
}

void insertEnd(Node **head, int data) {
    Node *node = new Node();
    Node *last = *head;
    node->data = data; //  Insert data in new node
    node->next = NULL; // link new node to NULL as it is last node
    if (*head == NULL) { // if list is empty add in beginning.
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

int findMiddle(Node *head) {
    // Write your code here
    int len = 0;
    if(head == NULL)
        return -1;
    
    if(head->next == NULL)
        return 1;

    Node *temp = head;

    while(temp) {
        len++;
        temp = temp->next;
    }
    temp = head;

    for (int i = 0; i < len/2; i++) {
        temp = temp->next;
    }

    return temp->data;
}

int findNLast(Node *head, int n) {
    // Write your code here
    if(head == nullptr || n <= 0)
        return -1;

    Node *p = head, *q = head;

    for (int i = 0; i < n; i++){
        if(p->next == NULL)
            return p->data;
        p = p->next;
    }

    while(p) {
        q = q->next;
        p = p->next;
    }

    return q->data;
}

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        Node *head = NULL;
        Node *t1, *t2;
        int k, ans;
        cin >> n;
        while (n--) {
            cin >> m;
            insertEnd(&head, m);
        }
        cin >> k;
        cout << findMiddle(head) << endl;
        cout << findNLast(head, k) << endl;
    }
    return 0;
}