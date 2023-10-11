#include<iostream>
using namespace std;

class Test {

    int x;  //here x is private
};
int main()
{
    Test t;
    t.x=20;
return t.x;
}

struct Test{
int x;  //here x is public
};
int main()
{
    Test t;
    t.x=20;
    cout<<t.x<<endl;
}

