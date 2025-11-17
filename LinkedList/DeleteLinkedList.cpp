#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedListByHead(int arr[], int size)
{
    Node *Head = NULL;
    for (int i = 0; i < size; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }
    return Head;
}

Node *CreateLinkedListByTail(int arr[], int size)
{
    Node *Head = new Node(arr[0]);
    Node *Tail = Head;

    for (int i = 0; i < size; i++)
    {
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
    return Head;
}
Node *CreateLinkedListByRecursion(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedListByRecursion(arr, index + 1, size);
    return temp;
};

Node *DeleteNode(int arr[], int size, int index)
{
    Node *Head;
    // Head = arr[0];

    for (int i = 0; i < index + 1; i++)
    {

        Node *temp = Head;
        temp->next = Head;
        Head = temp;
    }
}

int main()
{
    Node *Head;
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {1};
    int size = 1;
    Head = CreateLinkedListByRecursion(arr, 0, size);

    DeleteNode(arr, size, 3);

    // Delete Node at the first
    // if(Head != NULL){
    // Node * temp = Head;
    // Head = Head ->next;
    // delete temp;
    // };

    // Delete last node
    Node *curr = Head;
    Node *prev;
    if (Head != NULL)
    {

        if (curr->next == NULL)
        {
            delete Head;
            Head = NULL;
        }
        else
        {

            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            delete curr;
        }
    }

    // Preview Node
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " the address of the value is" << temp->next << endl;
        temp = temp->next;
    }
}