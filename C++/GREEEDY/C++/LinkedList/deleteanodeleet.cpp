#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void deleteNode(Node* head, int x) {
    Node* temp = head;

    while (temp->val != x) {
        temp = temp->next;
    }

    temp->val = temp->next->val;
    temp->next = temp->next->next;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int x;
    cin >> x;

    deleteNode(head, x);
    display(head);
}