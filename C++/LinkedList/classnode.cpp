#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node *a = new Node(10);
    Node *b = new Node(1);
    Node *c = new Node(11);
    Node *d = new Node(19);
    a->next=b;
    b->next=c;
    c->next=d;
    Node *temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}