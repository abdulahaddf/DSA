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


int main(){
  Node * Head;
  Head = NULL;
//   Head = new Node(4);
   
//   cout<< Head->data;
//   cout<< Head->next << "is the pointer";

 int arr[] = {1,3,4,5,6,7};

for (int i = 0; i < 6; i++)
{



//Check if the linked list is exists
if(Head == NULL){
    Head = new Node(arr[i]);
}
// If exist
else{
Node * temp;
temp = new Node(arr[i]);
temp -> next = Head;
Head = temp;
}

}

Node *temp = Head;
while(temp){
cout<<temp-> data <<" the address of the value is"<< temp-> next<<endl;
temp = temp->next;
}



}