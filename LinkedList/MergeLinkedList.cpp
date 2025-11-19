#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *sortedMerge(Node *head1, Node *head2)
    {
        // code here
        Node *head = new Node(0);
        Node *tail = head;
        while (head1 && head2)
        {
            if (head1->data <= head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        if (head1)
        {
            tail->next = head1;
        }
        else
        {
            tail->next = head2;
        }
        tail = head;
        head = head->next;
        delete tail;
        return head;
    }
};

void printList(Node *head)
{
    while (head)
    {
        cout << head->data;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // create two sorted lists for test: List1: 1->3->5, List2: 2->4->6
    Node *head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);

    Node *head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);

    cout << "List1: ";
    printList(head1);
    cout << "List2: ";
    printList(head2);

    Solution sol;
    Node *merged = sol.sortedMerge(head1, head2);

    cout << "Merged: ";
    printList(merged);

    return 0;
}