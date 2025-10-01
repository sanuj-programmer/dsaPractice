#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// Remove last node
Node* removeLast(Node* head) {
    if (head == nullptr) return nullptr;       // check if empty list
    if (head->next == nullptr) {              // check if only one node
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {     // traverse to second-last node
        temp = temp->next;
    }

    delete temp->next;                        // delete last node
    temp->next = nullptr;                     // set new tail
    return head;
}

// Traverse and print linked list
void traverseLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 2 -> 5 -> 8 -> 7
    Node* head = new Node(2);
    head->next = new Node(5);
    head->next->next = new Node(8);
    head->next->next->next = new Node(7);

    cout << "Original list: ";
    traverseLL(head);

    // Remove last node
    head = removeLast(head);
    cout << "After removing last node: ";
    traverseLL(head);

    return 0;
}
