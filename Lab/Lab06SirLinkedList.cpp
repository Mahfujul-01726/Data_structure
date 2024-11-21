#include <iostream>
using namespace std;

struct Block
{
    int d;
    Block *next;
};

int main()
{
    Block *head;
    head = NULL;

    Block *temp;
    cin >> temp.d;
    temp.next = NULL;
    head = &temp;

    cout << head->d;
}
