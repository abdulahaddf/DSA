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

Node *createDLL(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = createDLL(arr, index + 1, size);
    // temp->next->prev = temp;
    // if there is a next node, set its prev to temp
    if (temp->next != nullptr)
    {
        temp->next->prev = temp;
    }
    return temp;
}
Node *createDLL2(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL2(arr, index + 1, size, temp);

    return temp;
}

Node *CreateDLLbyTail(int arr[], int size)
{
    Node *Head = new Node(arr[0]);
    Node *Tail = Head;

    for (int i = 1; i < size; i++)
    {

        Tail->next = new Node(arr[i]);
        Tail->next->prev = Tail->next;
        Tail = Tail->next;
    }
    return Head;
}

//

void InsertAt(Node *&head, int psn, int num)
{
    Node *toInsert = new Node(num);

    if (psn <= 0 || head == NULL)
    {
        toInsert->next = head;
        toInsert->prev = NULL;
        if (head)
            head->prev = toInsert;
        head = toInsert;
        return;
    }

    // Insert at head (position 0)
    if (psn <= 0 || head == nullptr)
    {
        toInsert->next = head;
        toInsert->prev = nullptr;
        if (head)
            head->prev = toInsert;
        head = toInsert;
        return;
    }

    // Walk to node at position (psn - 1) or last node if list shorter
    Node *temp = head;
    int i = 0;
    while (temp->next != nullptr && i < psn - 1)
    {
        temp = temp->next;
        ++i;
    }

    // Now temp is either:
    // - node at index (psn-1) (normal case), or
    // - the last node (if psn > length), we'll append after temp

    Node *next = temp->next; // maybe nullptr if temp is tail

    // Link the new node between temp and next
    temp->next = toInsert;
    toInsert->prev = temp;
    toInsert->next = next;
    if (next)
        next->prev = toInsert;
}

int main()
{
    Node *head;
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[] = {0,1,0,2,0,1};
    int size = 6;

    head = createDLL(arr, 0, size);
    // head = CreateDLLbyTail(arr, size);

    // InsertAt(head, 0, 30);

    // Preview the DDL
    Node *temp = head;
    while (temp)
    {

        cout << temp->prev << " is Prev " << temp->data << " is the value " << temp->next << " is the stored value" << endl;
        temp = temp->next;
    };
}