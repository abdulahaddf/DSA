#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

Node *createDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);
    return temp;
}

Node *DeleteNode(Node *head, int pos)
{
    Node *curr = head;

    if (head != NULL)
    {
        // At first node
        if (pos == 1)
        {
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                head->prev = NULL;
            }
        }
        else
        {
            Node *curr = head;
            while (--pos)
            {
                curr = curr->next;
            }
            // If it is the last node
            if (curr->next == NULL)
            {
                curr->prev->next = NULL;
                delete curr;
            }
            // If it is in the middle
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
            }
        }

        return head;
    }
};

int main()
{
    Node *head;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    head = createDLL(arr, 0, size, NULL);

    head = DeleteNode(head, 9);

    // Preview the DDL
    Node *temp = head;
    while (temp)
    {

        // cout << temp->prev << " is Prev " << temp->data << " is the value " << temp->next << " is the stored value" << endl;

        cout << (temp->prev ? to_string(temp->prev->data) : string("NULL"))
             << " <- " << temp->data << " -> "
             << (temp->next ? to_string(temp->next->data) : string("NULL"))
             << '\n';
        temp = temp->next;
    };
}