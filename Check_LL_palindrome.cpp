#include <bits/stdc++.h>
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

Node *_last = NULL;

void insertEnd(struct Node **head, int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data; //  Insert data in new node
    node->next = NULL; // link new node to NULL as it is last node
    if (*head == NULL) // if list is empty add in beginning.
    {
        *head = node;
        _last = node;
        return;
    }
    _last->next = node; // Add the node after the last node of list
    _last = node;
    return;
}

/*
 *  struct Node {
 *    int data;
 *    Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */
int helper(struct Node **left, struct Node *right)
{
    if (right == NULL)
        return 1;
    int result = helper(left, right->next);
    if (result == 0)
        return 0;
    result = ((*left)->data == right->data);
    *left = (*left)->next;
    return result;
}
int checkPalindrome(struct Node *head)
{
    return helper(&head, head);
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        struct Node *head = NULL;
        int ans;
        cin >> n;
        while (n--)
        {
            cin >> m;
            insertEnd(&head, m);
        }
        ans = checkPalindrome(head);
        cout << ans << endl;
    }
    return 0;
}