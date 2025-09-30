//Convert Array to Linked List
// #include <iostream>
// #include <vector>
// using namespace std;
// struct Node {           //or you can use (class Node) instead of (struct Node) both work the same.
//     public:
//         int data;         // Data stored in the node
//         Node* next;       // Pointer to the next node in the linked list
//         // Constructors
//         Node(int data1, Node* next1) {
//             data = data1;
//             next = next1;
//         }
//         // Constructor
//         Node(int data1) {
//             data = data1;
//             next = nullptr;
//         }
// };

// Node* convertArr2LL(vector<int> &arr) {
//     Node* head = new Node(arr[0]); // Create the head node
//     Node* mover = head;          // Pointer to track the current node
//     // Iterate through the array and create nodes
//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]); // Create a new node
//         mover->next = temp; // Link the new node
//         mover = temp;           // Move to the new node
//     }
//     return head; // Return the head of the linked list
// }

// int main() {
//     vector<int> arr = {2, 5, 8, 7};
//     Node* head = convertArr2LL(arr); // Convert array to linked list
//     cout << head->data << endl; // Print the data stored in the head node
// }
// // Output
// // 2 (because only head->data is printed)






// To print the entire linked list
#include <iostream>
using namespace std;
class Node {         //or you can use (class Node) instead of (struct Node) both work the same.
    public:
        int data;      
        Node* next;       
        // Constructors
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

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; 
    return 0;
}
// Output
// 2 5 8 7 ----> prints the entire linked list data