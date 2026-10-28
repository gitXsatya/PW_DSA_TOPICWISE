#include <iostream>
#include <queue>
using namespace std;
class Node{
    public : 
        Node* left;
        Node* right;
        int val;
        Node(int val){
            this->val=val;
            this->left =NULL;
            this->right=NULL;
        }
};
int sizeoftree(Node* root){
    if(root==NULL) return 0;
    return 1+sizeoftree(root->left)+sizeoftree(root->right);
}
bool isCBT(Node* root){
    int count=0;
    int size = sizeoftree(root);
    queue <Node*> q;
    q.push(root);
    while(count<size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL)q.push(temp->left);
        if(temp!=NULL)q.push(temp->right);
    }
    while(q.size()>0){
        if(q.front()!=NULL) return false;
        q.pop();
    }
    return true;
  
}
bool isMax(Node* root){
    if(root==NULL) return true;
    if((root->left!=NULL && ( root->val < root->left->val)) || (root->right!=NULL && (root->val < root->right->val))) return false;
    return isMax(root->left)&&isMax(root->right); 

}
int main(){
    Node* a = new Node(20);
    Node* b= new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    cout<<isMax(a);
    if(isCBT(a)&&isMax(a)) cout<<"TREE IS MAX HEAP. :) ";
    else cout<<"TREE IS NOT MAX HEAP. :( ";
    
    
  

}