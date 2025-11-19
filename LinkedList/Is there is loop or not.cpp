#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} 



class Solution {
  public:
    bool detectLoop(Node* head) {
    if(head != NULL && head->next !=NULL){
        // code here
        Node * curr = head;
        unordered_map<Node*, bool>visited;
        while(curr != NULL){
           if(visited[curr] == 1){
               return 1;
           }
           visited[curr] = 1;
           curr = curr -> next;
        }
        return 0;
    }
        
    }
};

 Using Floyd's Cycle-Finding Algorithm
 class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
            return true;
            }
        }
            return false;
    }
};
