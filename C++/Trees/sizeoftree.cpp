#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
void displaytree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);
}
int sum(Node* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
  
}
int size(Node* root){
if(root==NULL) return INT_MIN;
return 1+size(root->left)+size(root->right);
}
int maxi(Node* root){
    if(root==NULL) return 0;
    int maax = max(root->val, max(maxi(root->left), maxi(root->right)));
    return maax;
}
int productoftree(Node* root){
    if(root==NULL) return 1;
    int Lt = productoftree(root->left);
    int rt = productoftree(root->right);
    return root->val*(Lt)*(rt);
}
int main(){
    Node* a = new Node(9);
    Node* b = new Node(2);
    Node* c = new Node(10);
    Node* d = new Node(10);
    Node* e = new Node(10);
    Node* f = new Node(30);
    Node* g = new Node(2);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // displaytree(a);
    // cout<<endl;
    // cout<<sum(a)<<endl;
    // cout<<size(a);
    cout<<maxi(a)<<endl;
    cout<<productoftree(a)<<" ";
}