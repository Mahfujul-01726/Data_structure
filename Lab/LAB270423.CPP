#include <iostream>

using namespace std;

// Define the node class for a linked list
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the linked list
};

// Define the stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    // Constructor to initialize the stack
    Stack()
    {
        top = NULL; // Initialize the top pointer to null
    }

    // Function to push an element onto the stack
    void push(int val)
    {
        // Create a new node and set its data to the value to be pushed
        Node *newNode = new Node();
        newNode->data = val;

        // Set the new node's next pointer to the current top of the stack
        newNode->next = top;

        // Set the top of the stack to the new node
        top = newNode;
    }

    // Function to pop an element from the stack
    void pop()
    {
        // Check if the stack is empty
        if (top == NULL)
        {
            cout << "Stack is empty, cannot pop element." << endl;
            return;
        }

        // Save the current top node in a temporary variable
        Node *temp = top;

        // Set the top of the stack to the next node in the linked list
        top = top->next;

        // Delete the old top node
        delete temp;
    }

    // Function to display the elements in the stack
    void display()
    {
        // Start at the top of the stack and iterate through each node
        Node *current = top;
        while (current != NULL)
        {
            // Print the data in the current node
            cout << current->data << " ";

            // Move to the next node
            current = current->next;
        }
        cout << endl;
    }
};

// Main function to test the stack
int main()
{
    // Create a new stack object
    Stack myStack;

    // Push some elements onto the stack
    myStack.push(3);
    myStack.push(5);
    myStack.push(1);
    myStack.push(2);

    // Pop some elements from the stack
    myStack.pop();

    // Display the remaining elements in the stack
    myStack.display();

    return 0;
}
