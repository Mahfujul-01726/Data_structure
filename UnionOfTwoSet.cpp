#include <iostream>
using namespace std;

int main()
{
    int m, n; // Array sizes
    cout << "First array size: ";
    cin >> m;
    int A[m];
    cout << "First array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }

    cout << "Second array size: ";
    cin >> n;
    int B[n];
    cout << "Second array: ";
    for (int j = 0; j < n; j++)
    {
        cin >> B[j];
    }

    // Calculation
    cout << "The Union of the two sets is: {";
    bool found;
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << " , ";
    }
    for (int i = 0; i < n; i++) // Iterate over the elements of array B
    {
        bool found = false;
        for (int j = 0; j < m; j++) // Iterate over the elements of array A
        {
            if (B[i] == A[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << B[i] << ", ";
        }
    }
    cout << "}" << endl;
    return 0;
}
