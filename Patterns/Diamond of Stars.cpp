/*
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
*/

#include<iostream>
using namespace std;

void printPatt(int n)
{
   	int i, j;
   
   	for(i=1;i<=n/2;i++)
    {
       	for(j=i;j<=n/2;j++)
        {cout << ' ';}
       	for(j=1;j<2*i;j++)
        {cout << '*';}
    cout << endl;
  	}
   	for(;i>0;i--)
    {
       	for(j=i;j<=n/2;j++)
        {cout << ' ';}
       	for(j=1;j<2*i;j++)
        {cout << '*';}
      cout << endl;
  	}
}

int main() 
{
    int n;
    cin>>n;
    printPatt(n);
    return 0;
}
