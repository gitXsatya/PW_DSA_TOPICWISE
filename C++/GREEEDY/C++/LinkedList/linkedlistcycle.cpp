#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}
int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "false";
        return 0;
    }

    Node* head = NULL;
    Node* tail = NULL;

    // Create linked list
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int pos;
    cin >> pos;

    // Create cycle
    if (pos != -1) {
        Node* temp = head;

        for (int i = 0; i < pos; i++) {
            temp = temp->next;
        }

        tail->next = temp;
    }

    // Check cycle
    if (hasCycle(head)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}