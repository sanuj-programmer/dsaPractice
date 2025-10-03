#include <iostream>
using namespace std;
class Node {         //or you can use (class Node) instead of (struct Node) both work the same.
    public:
        int data;      
        Node* next;       
        // Constructor
        Node(int data1, Node* next1) {
            data = data1;
            next = next1; 
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* convertArr2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;          

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp; 
        mover = temp;           
    }
    return head; 
}

int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfValueExists(Node* head, int value){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==value) return 1; // Value found
        temp=temp->next;
    }
    return 0; // Value not found
}

// Remove head node
Node* removeHead(Node* head) {
    if (head == NULL) return NULL; // empty list

    Node* temp = head;
    head = head->next;  // move head to next
    delete temp;        // free old head
    return head;
}

// Remove last node
Node* removeLast(Node* head) {
    if (head == nullptr) return nullptr; // empty list

    if (head->next == nullptr) { // only one node
        delete head;
        return nullptr;
    }

    Node* temp = head;
    // traverse until the second-last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;  // delete last node
    temp->next = nullptr;
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    //Traverse and print the linked list
    Node* temp = head;
    cout << "Original list: ";
    while (temp != nullptr) {   //Keep looping as long as temp is not a null pointer.
        cout << temp->data << " ";  // Print the data of the current node
        temp = temp->next;  // Move to the next node
    }
    cout << endl;

    cout << "Length of Linked List: " << lengthOfLL(head) << endl;
    cout << "Check if value 5 exists: " << checkIfValueExists(head, 5) << endl;
    cout << "Check if value 10 exists: " << checkIfValueExists(head, 10) << endl;

    head = removeHead(head);        // Remove first node
    cout << "After removing 1st head, new list: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = removeHead(head);        // Remove second node
    cout << "After removing 2nd head, new list: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = removeLast(head);        // Remove last node from the remaining list
    cout << "After removing last node from previous 2nd head list, new list: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;



    return 0;
}







//separate traverse function that prints the linked list.
//so you don’t need to repeat the while loop in every part of your code.
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// // Convert array to linked list
// Node* convertArr2LL(vector<int> &arr) {
//     if (arr.empty()) return nullptr;

//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// // Traverse and print linked list
// void traverseLL(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Length of linked list
// int lengthOfLL(Node* head){
//     int cnt = 0;
//     Node* temp = head;
//     while(temp != nullptr){
//         temp = temp->next;
//         cnt++;
//     }
//     return cnt;
// }

// // Check if value exists in linked list
// int checkIfValueExists(Node* head, int value){
//     Node* temp = head;
//     while(temp != nullptr){
//         if(temp->data == value) return 1; // Value found
//         temp = temp->next;
//     }
//     return 0; // Value not found
// }

// // Remove head node
// Node* removeHead(Node* head) {
//     if (head == nullptr) return nullptr;

//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }

// int main() {
//     vector<int> arr = {2, 5, 8, 7};
//     Node* head = convertArr2LL(arr);

//     cout << "Original list: ";
//     traverseLL(head);

//     cout << "Length of Linked List: " << lengthOfLL(head) << endl;
//     cout << "Check if value 5 exists: " << checkIfValueExists(head, 5) << endl;
//     cout << "Check if value 10 exists: " << checkIfValueExists(head, 10) << endl;

//     head = removeHead(head);
//     cout << "After removing 1st head, new list: ";
//     traverseLL(head);

//     head = removeHead(head);
//     cout << "After removing 2nd head, new list: ";
//     traverseLL(head);

//     return 0;
// }
