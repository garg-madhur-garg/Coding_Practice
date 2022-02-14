#include <iostream>
#include <stack>
using namespace std;

struct Node{
  Node* left;
  Node* right;
  int data;

  Node(int val)
    {
        data = val;
 
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};

void inorderIterative(Node* root){
  stack<Node*> s;

  Node* curr = root;
  while(!s.empty() || curr != NULL){
    if(curr != NULL){
      s.push(curr);
      curr = curr->left;
    }

    else{
      curr = s.top();
      s.pop();
      cout << curr->data << " ";
      curr = curr->right;
    }
  }
}

int main(){
  Node* root1 = new Node(1);
  Node* root2 = new Node(2);
  Node* root3 = new Node(3);
  Node* root4 = new Node(4);
  Node* root5 = new Node(5);

  root1->left = root2;
  root1->right = root3;

  root2->left = root4;
  root2->right = root5;

  inorderIterative(root1);
}