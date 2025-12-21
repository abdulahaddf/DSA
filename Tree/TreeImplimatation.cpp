#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    int x;
    cout<<"Enter the value of root node: ";
    cin>>x;
    queue<Node*> q; 
    Node *root=new Node(x);
    q.push(root);
    while (!q.empty()){
        
    }

}
