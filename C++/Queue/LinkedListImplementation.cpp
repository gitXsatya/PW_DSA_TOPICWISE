#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int val ;
    Node(int val){
       this->next=NULL;
       this->val=val;

    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
         Node* temp = new Node(val);
         if(size==0) head=tail=temp;
         else{
            tail->next=temp;
            tail=temp;
         }
         size++;
    }
    void pop(){
        if(size==0){
            cout<<"queue is empty !";
            return;
        }
        head=head->next;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"queue is empty !";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"queue is empty !";
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.display();  

}