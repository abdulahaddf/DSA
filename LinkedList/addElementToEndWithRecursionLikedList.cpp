# include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL; 
    };
};

Node * CreateLinkedList(int arr[], int index, int size){
    if(index == size){
        return NULL;

    }
    Node *temp;
    temp = new Node(arr[index]);
    temp -> next = CreateLinkedList(arr, index +1, size);    //it will return the address of the new created node that will be stored in the temps next;
    return temp;
};


int main(){
  Node * Head, * Tail;
  Head = Tail = NULL;


 int arr[] = {1,3,4,5,6,7};

Head = CreateLinkedList(arr,0,6);



// Print the value
Node *temp = Head;
while(temp){
cout<<temp-> data <<" the address of the value is"<< temp-> next<<endl;
temp = temp->next;
}

}