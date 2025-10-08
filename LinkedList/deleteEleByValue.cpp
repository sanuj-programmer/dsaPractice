#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Delete a node by value
Node* deleteElement(Node* head, int element) {
    if (head == NULL) return head;  // empty list

    // Case 1: delete head node
    if (head->data == element) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Traverse until the element is found
    while (temp != NULL && temp->data != element) {
        prev = temp;
        temp = temp->next;
    }

    // If element not found
    if (temp == NULL) return head;

    // Unlink the node from the list
    prev->next = temp->next;
    delete temp;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original list: ";
    printList(head);

    int element = 30;
    head = deleteElement(head, element);

    cout << "After deleting element " << element << ": ";
    printList(head);

    return 0;
}
