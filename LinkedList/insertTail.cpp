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

// Insert at tail
Node* insertTail(Node* head, int value) {
      Node* newNode = new Node(value);  // create a new node with given value and next = nullptr

      // If the list is empty, new node becomes head
    if(head == NULL) {
        return new Node(value);
    }


    // Otherwise traverse to last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;     // Link last node to new node
    return head;
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

    // Insert at tail
    head = insertTail(head, 200);
    cout << "After inserting 200 at tail: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructor with next pointer
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }

//     // Constructor without next pointer
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// // Convert array → Linked List
// Node* convertArr2LL(vector<int>& arr) {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// // Insert at head
// Node* insertHead(Node* head, int value) {
//     return new Node(value, head);
// }

// // Insert at tail
// Node* insertTail(Node* head, int value) {
//     Node* newNode = new Node(value);

//     // If the list is empty, new node becomes head
//     if (head == nullptr) return newNode;

//     // Otherwise traverse to last node
//     Node* temp = head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }

//     // Link last node to new node
//     temp->next = newNode;

//     return head;
// }

// // Traverse and print linked list
// void traverse(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {2, 5, 8, 7};
//     Node* head = convertArr2LL(arr);

//     cout << "Original list: ";
//     traverse(head);

//     // Insert at head
//     head = insertHead(head, 100);
//     cout << "After inserting 100 at head: ";
//     traverse(head);

//     // Insert at tail
//     head = insertTail(head, 200);
//     cout << "After inserting 200 at tail: ";
//     traverse(head);

//     return 0;
// }
