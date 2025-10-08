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
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}




// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;

//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }

//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }
// };

// // Function to insert new node at the head
// Node* insertHead(Node* head, int newData) {
//     Node* newNode = new Node(newData, head); //or directly use {return new Node(newData, head)};
//     return newNode;
// }


// // Function to traverse and print the linked list
// void traverse(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Create linked list manually: 2 -> 5 -> 8 -> 7 -> NULL
//     Node* head = new Node(2);
//     head->next = new Node(5);
//     head->next->next = new Node(8);
//     head->next->next->next = new Node(7);

//     cout << "Original list: ";
//     traverse(head);

//     // Insert new node at head
//     head = insertHead(head, 10);
//     cout << "After inserting head: ";
//     traverse(head);

//     return 0;
// }
