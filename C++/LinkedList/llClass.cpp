#include <iostream>
using namespace std;
class Node{ // user defined data type 
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{ // user defined data structure
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
     void insertAtBegining(int val){
        Node *temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtidx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid index !"<<endl;
            return;
        }
        else if(idx==0) insertAtBegining(val);
        if(idx==size) insertAtEnd(val);
        else{
            Node *t= new Node(val);
            Node *temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0||idx>=size){
            cout<<"INVALID INDEX !";
            return -1;
        }else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node *temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteATHead(){
        if(size==0){
            cout<<"list is empty !";
            return;
        }
         head=head->next;
         size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"list is empty !";
            return;
        }
        Node* temp= head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 ||idx>=size){
            cout<<"invalid index !";
            return ;
        }
        else if(idx==0) return deleteATHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
   
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtBegining(100);
    ll.display();
    ll.insertAtidx(2,60);
    ll.display();
    //cout<<ll.getAtIdx(0);
    ll.deleteATHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.insertAtEnd(199);
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();

}