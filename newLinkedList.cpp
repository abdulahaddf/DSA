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
  Node * Head ;
  Node * Second ;
  Head = new Node(4);
  Head-> next = Second;

  Second = new Node(6);
  Second -> next = NULL;
   
  cout<< Head->data<<endl;
  cout<< Head->next << "is the pointer value"<<endl;
  cout<< Second->data<<endl;
  cout<< Second->next << "is the pointer value"<<endl;

}