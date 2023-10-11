#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "First array row and col: " << endl;
    cin >> m >> n;
    int A[m][n];
    cout << "Input element in first array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Showing first array elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int o, p;
    cout << "Second array row and col: " << endl;
    cin >> o >> p;
    int B[o][p];
    cout << "Input element in Second array: " << endl;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Showing second array elements: " << endl;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    //!!!!!!!!!Calculation!!!!!!!!!!!//////
    int C[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "Showing Sub of Two Matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
