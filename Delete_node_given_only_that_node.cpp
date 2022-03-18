#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
struct Node {
    int data;
    Node *next;
};

void forwardPrint(Node *head) {
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

void deleteNodeK(Node *node) {
    // Write your code here
    if(node == NULL || node->next == NULL)
        return;
    
    Node *curr = node, *nextP = curr->next;
    curr->data = nextP->data;
    curr->next = nextP->next;
    delete nextP;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node *head1 = NULL;
        Node *t1, *t2, *t3;
        int n, m, k;
        cin >> n;
        while (n--) {
            cin >> m;
            insertEnd(&head1, m);
        }
        cin >> k;
        t1 = head1;
        if (k > 0) {
            while (k--)
                t1 = t1->next;
        }
        deleteNodeK(t1);
        forwardPrint(head1);
        cout << endl;
    }
    return 0;
}