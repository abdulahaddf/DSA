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

int main(){
     Node *Head;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    Head = CreateLinkedListByRecursion(arr, 0, size);


    Node *prev = NULL;
    Node *curr = Head;
    Node *forward = NULL;
    while(curr !=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward; 
    }
    Head = prev;






    // Preview Node
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " the address of the value is" << temp->next << endl;
        temp = temp->next;
    }
}