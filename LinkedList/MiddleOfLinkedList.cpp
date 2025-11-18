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

Node *CreateLinkedListByhead(int arr[], int size)
{
    Node *head = NULL;
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    return head;
}

Node *CreateLinkedListByTail(int arr[], int size)
{
    Node *head = new Node(arr[0]);
    Node *Tail = head;

    for (int i = 0; i < size; i++)
    {
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
    return head;
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

int getLen(Node *head)
{
    int len = 0;
    while (head != 0)
    {
        head = head->next;
        len++;
    }
    return len;
};

Node *FindMiddle(Node *head)
{
    int len = getLen(head);
    int ans = (len / 2);

    Node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
};

int main()
{
    Node *head;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    head = CreateLinkedListByRecursion(arr, 0, size);

    Node *mid = FindMiddle(head);
    int middleValue = mid->data;
    cout << middleValue << " Is the middle value " << endl;

    // Preview Node
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " the address of the value is" << temp->next << endl;
        temp = temp->next;
    }
}