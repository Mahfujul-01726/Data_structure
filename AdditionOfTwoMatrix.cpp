#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "First Array row and columns: " << endl;
    cin >> m >> n;
    int A[m][n];
    cout << " Enter First Array elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Showing First Array elements :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int o, p;
    cout << "Second Array row and columns: " << endl;
    cin >> o >> p;
    int B[o][p];
    cout << " Enter Secomd Array elements: " << endl;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Showing Second Array elements :" << endl;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    int C[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "Sum of Two Matrix is: " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
