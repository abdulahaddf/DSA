#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linklistTraversal(struct Node * ptr){
while (ptr != NULL){
    printf("Element: %d\n", ptr -> data);
    ptr = ptr -> next;
}
};

 struct Node * insertAtFirst(struct Node *head, int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->next = head;
    ptr -> data = data;
    return ptr;
 };


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    printf("%d the size of head",sizeof(head)); 
    // Link first and second list
    head -> data = 7;
    head -> next = second ;
    // Link first and second list
    second -> data = 11;
    second -> next = third;
    // Link first and second list
    third -> data = 17;
    third -> next = NULL ;

    linklistTraversal(head);
    head = insertAtFirst(head, 56);
    linklistTraversal(head);            

    return 0;




}