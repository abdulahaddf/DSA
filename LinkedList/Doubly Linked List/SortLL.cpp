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

int main()
{
    Node *head;
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[] = {0,1,0,2,0,1};
    int size = 6;

    head = CreateLinkedListByRecursion(arr, 0, size);
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