#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
         cout<<head->val<<" ";
         head=head->next;
    }
    cout<<endl;
}
int length(Node*head){
    int n=0;
    while(head!=NULL){
        n++;
        head=head->next;
    }
    return n;
}
void interesection(Node* heada,Node*headb){
    Node*temp1=heada;
    Node *temp2=headb;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *A = new Node(40);
    Node *B = new Node(50);
    Node *C = new Node(60);
    Node *D = new Node(70);
    Node *E= new Node(110);
    Node *heada=a;
    Node* headb=E;
    a->next=b;
    b->next=A;
    A->next=c;
    E->next=B;
    B->next=C;
    C->next=A;
    c->next=D;
    display(heada);
    display(headb);
    int al=length(heada);
    int el=length(headb);
    if(al>el){
        
    }
    

}