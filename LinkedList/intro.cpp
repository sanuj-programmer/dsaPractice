// Creating a Linked List in C++
// class Node{
//     Public: // access modifier
//     int data; // the data value
//     Node* next; // the pointer to the next value
//     Public:
//     // constructor
//     Node (int data1, Node* next1){
//         data=data1;  // Initialize data with the provided value
//         next=next1;  // Initialize next with the provided
//     }
//     Node (int data1){
//         data=data1;  // Initialize data with the provided value
//         next=nullptr;  // Initialize next as null since it's the end of the list

//     }
// };
// int main(){
//     vector<int> arr={2,5,8,7};
//     Node* y= new Node(arr[0]);
//     cout<<y<<'\n'; // returns the memory value
//     cout<<y->data<<'\n'; // returns the data stored at that memory point
// }
// // Output:
// // 0x11b7f90
// // 2




// Understanding Pointers
// int main(){
//     int x=2;
//     int* y=&x; // y reference x
//     cout<<y<<'\n';
// }
// // Output: 0x61ff0c




// Define the Node class representing each element in the linked list
// #include <iostream>
// using namespace std;
// struct Node {             //or you can use (class Node) instead of (struct Node) both work the same. Class add benefit of OPPs concepts
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
// int main() {
//     vector<int> arr = {2, 5, 8, 7};
//     // Create a Node 'x' with the first element of the vector and a null next reference
//     Node x = Node(arr[0], nullptr);
//     // Node x = Node(arr[0]);
//     // Create a pointer 'y' pointing to the Node 'x'
//     Node* y = &x;
//     // Print the memory address of the Node 'x' using the pointer 'y'
//     cout << y << '\n';
// }






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
