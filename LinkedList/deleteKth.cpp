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

// Delete k-th node (1-indexed)
Node* deleteKth(Node* head, int k) {
    if (head == nullptr) return nullptr;  // empty list

    // Case 1: delete head node
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse to (k-1)th node
    Node* temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    // If k is out of range
    if (temp == nullptr || temp->next == nullptr)
        return head;

    // Delete kth node
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;

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

    int k = 3;
    head = deleteKth(head, k);

    cout << "After deleting " << k << "rd element: ";
    printList(head);

    return 0;
}
