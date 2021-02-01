/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1234
123
12
1
*/

#include<iostream>
using namespace std;

void printPatt(int n)
{
       for(int i=0;i<=n;i++)
    	{
        	for(int j=1;j<=n-i;j++)
        	{
            cout<<j;
        	}
        	cout<<endl;
    	}
}


int main() {
	int n;
    cin>>n;
    printPatt(n);
	
}
