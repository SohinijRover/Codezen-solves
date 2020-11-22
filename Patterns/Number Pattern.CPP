/*
Pattern for N = 3
333
233
123
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         for(int j=i;j>0;j--)
        {
            cout<<(n-j);
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}
