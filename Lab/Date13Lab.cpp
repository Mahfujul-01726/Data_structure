#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

Node *createLinkedList(int n)
{
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

    return head;
}

void traverseLinkedList(Node *head)
{
    cout << " Linked List is: ";
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << \" ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node *head = createLinkedList(n);

    traverseLinkedList(head);

    return 0;
}
