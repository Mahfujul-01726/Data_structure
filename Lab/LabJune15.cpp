// Queue Implementation linked list based

#include <iostream>
using namespace std;
struct Node
{
    int data;

    Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
    if (front = NULL)
        return true;
    else
        return false;
}

void enqueue(int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;

    if (front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

void dequeue()
{
    if (isempty())
    {
        cout << "Queue is empty!" << endl;
    }
    else if (front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else
    {
        Node *ptr = front;
        front = front->link;
        free(ptr);
    }
}

void showfront()
{
    if (isempty())
        cout << "Queue is empty" << endl;
    else
        cout << "element at front is: " << front->data << endl;
}

void dispalyQueue()
{
    if (isempty())
        cout << "Queue is empty" << endl;
    else
    {
        Node *ptr = front;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
    }
}

int main()
{
    int choice, flag = 1, value;
    while (flag == 1)
    {
        cout << "1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value" << endl;
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            showfront();
            break;
        case 4:
            dispalyQueue();
            break;
        case 5:
            flag = 0;
            break;
        }
    }

    return 0;
}