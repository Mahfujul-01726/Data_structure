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

    Block temp;
    head = &temp;
    cin >> head->d;
    // temp.next;
    cout << head->d;

    return 0;
}
