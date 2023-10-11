#include<iostream>
using namespace std;

int main()
{
    int m, n; // Array sizes
    cout << "First array size: ";
    cin >> m;
    int A[m];
    cout << "First array: ";
    for(int i=0; i<m; i++)
    {
        cin >> A[i];
    }

    cout << "Second array size: ";
    cin >> n;
    int B[n];
    cout << "Second array: ";
    for(int j=0; j<n; j++)
    {
        cin >> B[j];
    }

//////////////////////Calculation/////////////////////

    cout << "The difference of the two sets is: {";
    for(int i=0; i<m; i++)
    {
        bool found = false;
        for(int j=0; j<n; j++)
        {
            if(A[i] == B[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout << A[i] << ", ";
        }
    }
    cout << "}" << endl;
    return 0;
}
