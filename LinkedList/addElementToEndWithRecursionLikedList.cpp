// # include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     };
// };

// Node * CreateLinkedList(int arr[], int index, int size){
//     if(index == size){
//         return NULL;

//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp -> next = CreateLinkedList(arr, index +1, size);    //it will return the address of the new created node that will be stored in the temps next;
//     return temp;
// };

// int main(){
//   Node * Head, * Tail;
//   Head = Tail = NULL;

//  int arr[] = {1,3,4,5,6,7};

// Head = CreateLinkedList(arr,0,6);

// // Print the value
// Node *temp = Head;
// while(temp){
// cout<<temp-> data <<" the address of the value is"<< temp-> next<<endl;
// temp = temp->next;
// }

// }

// Add to starting with recursion
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     };
// };

// Node *CreateLinkedList(int arr[], int index, int size, Node *prev)
// {
//     if (index == size)
//     {
//         return prev;
//     }

//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = prev; // it will return the address of the new created node that will be stored in the temps next;
//     return CreateLinkedList(arr, index + 1, 6, temp);

//     return temp;
// };

// Add to any particular position with recursion
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
    };
};

Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size); // it will return the address of the new created node that will be stored in the temps next;
    return temp;
};



Node* insertAtPosition(Node* head, int x, int value) {
    // Insert at head
    if (x == 0) {
        Node* temp = new Node(value);
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    for (int i = 0; curr != NULL && i < x - 1; i++) {
        curr = curr->next;
    }

    if (curr == NULL) return head;  // invalid position

    Node* temp = new Node(value);
    temp->next = curr->next;
    curr->next = temp;

    return head;
}


int main()
{
    Node *Head, *Tail;
    Head = Tail = NULL;

    int arr[] = {1, 3, 4, 5, 6, 7};

    Head = CreateLinkedList(arr, 0, 6);

    int x = 2;
    int value = 30;

   Head = insertAtPosition(Head, x, value);




    // Print the value
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " the address of the value is" << temp->next << endl;
        temp = temp->next;
    }
}
