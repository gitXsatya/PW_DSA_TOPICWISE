#include <iostream>
using namespace std;
class Node{
    public :
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class DoublyLL{
    public:
        Node* head;
        Node* tail;
        int size;
        DoublyLL(){
            head=tail=NULL;
            size = 0;
        }
        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size==0) head=tail=temp;
            else{
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
            size++;
        }
        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size==0) head=tail=temp;
            else{
                temp->next = head;
                head->prev=temp;
                head = temp;
            }
            size++;
        }
        void insertAtIdx(int idx , int val){
            if(idx<0 || idx>size) cout<<"Invalid index requested !"<<endl;
            else if(idx==0) insertAtHead(val);
            else if(idx==size) insertAtTail(val);
            else{
                Node* newnode = new Node(val);
                Node* temp = head;
                for(int i=0;i<idx-1;i++){
                    temp = temp->next;
                }
               newnode->next = temp->next;
               temp->next->prev = newnode;
               temp->next = newnode;
               newnode->prev = temp;
            }
            size++;
        }
        void deleteAtHead(){
            if(size==0){
                cout<<"List is empty !";
                return;
            }
            head = head->next;
            if(head) head->prev = NULL;
            if(head==NULL) tail=NULL;
            size--;  
        }
        void deleteAtTail(){
            if(size==0){
                cout<<"List is empty !";
                return;
            }
            else if(size==1){
                deleteAtHead();
                return;
            }
            else{
                Node* temp = tail->prev;
                temp->next = NULL;
                tail = temp;
            }
            size--;
            
        }
        void deleteAtidx(int idx){
            if(size==0){
                cout<<"list is empty !";
                return;
            }
            else if(idx>size || idx<0){
                cout<<"invalid index !";
            }
            else if(idx==0) deleteAtHead();
            else if(idx==size) deleteAtTail();
            else{
                Node *temp = head;
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                temp->next->prev= temp;
            }
            size--;
        }
        int GetAtIdx(int idx){
            if(idx>size || idx<0){
                cout<<"invalid index requested !";
                return -1;
            }
            else if(idx==0) return head->val;
            else if(idx==size) return tail->val;
            else{
                if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++) temp=temp->next;
                return temp->val;
                }else{
                    Node* temp = tail;
                    for(int i=1;i<size-idx;i++) temp=temp->prev;
                    return temp->val;
                }
            }
        }
        void display(){
            Node* temp = head;
            while(temp){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
        

};
int main(){
    DoublyLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    //list.display();
    list.insertAtIdx(2,200);
   // list.display();
    list.deleteAtTail();
    //list.display();
    list.deleteAtHead();
    //list.display();
    list.insertAtHead(1000);
    list.insertAtIdx(3,3000);
    //list.display();
    list.deleteAtidx(3);
    //list.display();
    //cout<<list.GetAtIdx(0)<<endl;;
    list.insertAtTail(200);
    list.insertAtTail(301);
    list.insertAtTail(402);
    list.insertAtTail(503);
    list.display();
    cout<<list.GetAtIdx(7)<<endl;


}
