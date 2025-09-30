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
//     Node* mover = head;          // Pointer to track the current node. mover is variable name, can be anything
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

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    //Traverse and print the linked list
    Node* temp = head;
    while (temp != nullptr) {   //Keep looping as long as temp is not a null pointer.
        cout << temp->data << " ";  // Print the data of the current node
        temp = temp->next;  // Move to the next node
    }
    cout << endl; 

    cout << "Length of Linked List: " << lengthOfLL(head) << endl;
    cout << "Check if value 5 exists: " << checkIfValueExists(head, 5) << endl;
    cout << "Check if value 10 exists: " << checkIfValueExists(head, 10) << endl;
    return 0;
}
