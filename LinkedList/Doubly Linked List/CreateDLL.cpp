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

Node *createDDL(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next->prev = temp->next;
    temp->next = createDDL(arr, index + 1, size);
    return temp;
}

Node *CreateDDLbyTail(int arr[], int size)
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

void InsertAt(Node * &head, int arr[], int size, int psn, int num)
{
    Node *temp = head;
    cout << temp << endl;
    Node *toInsert = new Node(num);
    for (int i = 0; i < psn; i++)
    {
        if (i == psn - 1)
        {

            toInsert->next = temp->next;
            temp->next->prev = toInsert;
            temp->next = toInsert;
            toInsert->prev = temp;
         
        }
        temp = temp->next;
    }
};

int main()
{
    Node *head;
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9};
    int size = 9;

    // head = createDDL(arr,0,size);
    head = CreateDDLbyTail(arr, size);

    InsertAt(head, arr, size, 3, 30);

    // Preview the DDL
    Node *temp = head;
    while (temp)
    {

        cout << temp->prev << " is Prev " << temp->data << " is the value " << temp->next << " is the stored value" << endl;
        temp = temp->next;
    };
}