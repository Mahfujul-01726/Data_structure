#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int A[n][m];

    cout << "Enter the elements of the array:\n";

    //Storing user input in the memory
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "The elements of the array are:\n";

    // printing array elements
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << A[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}
