/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
202
3003
*/

#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    cout<<1<<endl;
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                cout<<i;
            else
                cout<<0;
        }
        cout<<endl;
    }
	
}
