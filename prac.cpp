#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor without next pointer
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert array → Linked List
Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Insert at head
Node* insertHead(Node* head, int value) {
    return new Node(value, head);
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    cout << "Original list: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    head = insertHead(head, 100);

    cout << "After inserting 100 at head: ";
    temp = head; // just reuse the same variable
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
