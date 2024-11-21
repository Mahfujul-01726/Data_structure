#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node *head = NULL;
    Node *current = NULL;

    for (int i = 0; i < n; i++)
    {
        Node *newNode = new Node();
        cout << "Enter the value of node " << i + 1 << ": ";
        cin >> newNode->value;

        if (head == NULL)
        {
            head = newNode;
            current = newNode;
        }
        else
        {
            current->next = newNode;
            current = newNode;
        }
    }

    /*
        /  Insert data at the beginning

        Node *newNode1 = new Node();
        cout << "Enter the value to insert at the beginning: ";
        cin >> newNode1->value;
        newNode1->next = head;
        head = newNode1;

        / Insert data at the end

        Node *newNode2 = new Node();
        cout << "Enter the value to insert at the end: ";
        cin >> newNode2->value;
        newNode2->next = nullptr;

        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode2;

        / Insert data at a specified position

int pos;
cout << "Enter the position to insert data: ";
cin >> pos;

if (pos < 1 || pos > n + 1) {
    cout << "Invalid position" << endl;
} else {
    Node *newNode = new Node();
    cout << "Enter the value to insert: ";
    cin >> newNode->value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        current = head;
        for (int i = 1; i < pos - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    n++;

    */

    // Traverse the list and print the values
    cout << "Linked List is: ";
    current = head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    /*
        / Search for a value in the linked list
        int searchValue;
        cout << "Enter a value to search: ";
        cin >> searchValue;

        current = head;
        int pos = 1;
        bool found = false;

        while (current != NULL)
        {
            if (current->value == searchValue)
            {
                found = true;
                break;
            }
            current = current->next;
            pos++;
        }

        if (found)
        {
            cout << searchValue << " found at position " << pos << endl;
        }
        else
        {
            cout << searchValue << " not found in the list" << endl;
        }


    / Search for a value in the linked list

    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;

    current = head;        // Start at the head of the list
    Node *previous = NULL; // Initialize the previous node to NULL
    int pos = 1;           // Initialize the position to 1
    bool found = false;    // Initialize the "found" flag to false

    / Traverse the list until the end or until the search value is found

    while (current != NULL)
    {
        if (current->value == searchValue)
        {
            found = true; // Set the "found" flag to true
            break;        // Exit the loop since the search value was found
        }
        previous = current;      // Update the previous node to the current node
        current = current->next; // Move to the next node in the list
        pos++;                   // Increment the position
    }

    / Check if the search value was

    if (found)
    {
        if (previous == NULL)
        {
            /  If the node to be deleted is the first node in the list

            head = current->next; // Update the head to skip the first node
        }
        else
        {
            /  If the node to be deleted is not the first node in the list

            previous->next = current->next; // Update the previous node to skip the current node
        }

        delete current; // Free the memory used by the current node
        n--;            // Decrement the size of the list
        cout << searchValue << " was deleted from position " << pos << endl;
    }
    else
    {
        cout << searchValue << " not found in the list" << endl;
    }
    /  After deleting the found data linkedList is

    cout << " After deleting the found data linkedList is: "; //! if not data found before linked list print
    current = head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
*/
    return 0;
}