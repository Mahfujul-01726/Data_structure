
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"First array row and col no: "<<endl;
    cin>>m>>n;
    int A[m][n];
    cout<<"First Array input: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
    }
    cout<<"first array output: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
    }

     int o,p;
    cout<<"Second array row and col no: "<<endl;
    cin>>o>>p;
    int B[o][p];
    cout<<"Second Array input: "<<endl;
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<p;j++)
            {
                cin>>B[i][j];
            }
    }
    cout<<"Second array output: "<<endl;
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<p;j++)
            {
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
    }
    //////////matrix calculation//////////

    int C[m][p];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    cout<<" Subtraction of two matrix: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
