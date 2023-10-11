//Take input from user store them in an array [1D]

#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
  int A[m];
  cout<<" Enter 5 numbers: " <<endl;
  // store input from user to Array
  for(int i=0; i<m;i++)
  {
      cin>>A[i];
  }
  cout<<"The numbers are: "<<endl;
  // Print array elements
  for(int n=0;n<m;n++)
  {
      cout<<A[n]<<" ";
  }
  return 0;
}
