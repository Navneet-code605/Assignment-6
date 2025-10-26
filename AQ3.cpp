#include <iostream> 
using namespace std; 
 
struct Node { 
    int data; 
    Node* prev; 
    Node* next; 
}; 
 
Node* head = NULL; 
 
// Function to insert at end 
void insertEnd(int val) { 
    Node* newNode = new Node; 
    newNode->data = val; 
    newNode->next = NULL; 
    newNode->prev = NULL; 
 
    if (head == NULL) 
        head = newNode; 
    else { 
        Node* temp = head; 
        while (temp->next != NULL) 
            temp = temp->next; 
        temp->next = newNode; 
        newNode->prev = temp; 
    } 
} 
 
// Function to find size 
int getSize() { 
    int count = 0; 
    Node* temp = head; 
    while (temp != NULL) { 
        count++; 
        temp = temp->next; 
    } 
    return count; 
} 
 
// Display function 
void display() { 
    Node* temp = head; 
    cout << "Doubly Linked List: "; 
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
    cout << endl; 
} 
 
int main() { 
    insertEnd(10); 
    insertEnd(20); 
    insertEnd(30); 
    insertEnd(40); 
 
    display(); 
    cout << "Size of Doubly Linked List = " << getSize() << endl; 
    return 0; 
} 

3B

#include <iostream> 
using namespace std; 
 
// Node structure 
class Node { 
public: 
    int data; 
    Node* next; 
 
    Node(int value) { 
        data = value; 
        next = nullptr; 
    } 
};  
 
// Function to count nodes in circular linked list  
int getSize(Node* head) { 
    if (head == nullptr) return 0; 
 
    int count = 0; 
    Node* temp = head; 
 
    do { 
        count++; 
        temp = temp->next; 
    } while (temp != head); 
 
    return count; 
} 
 
int main() { 
    // Create nodes 
    Node* head = new Node(20); 
    Node* second = new Node(100); 
    Node* third = new Node(40); 
    Node* fourth = new Node(80); 
    Node* fifth = new Node(60); 
 
    // Link nodes circularly 
    head->next = second; 
    second->next = third; 
    third->next = fourth; 
    fourth->next = fifth; 
    fifth->next = head;  // circular link 
 
    // Find size 
    cout << "Size of circular linked list: " << getSize(head) << endl; 
 
    return 0; 
} 
