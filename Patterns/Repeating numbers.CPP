/*
Sample Input :
5
Sample Output :
1
23 
4567
89123456
7891234567891234
*/

#include<iostream>
#include<math.h>
using namespace std;

int a=1;
void printPatt(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<pow(2,i);j++)
        {
            cout<<a;
            a++;
            if(a>9)
                	a=1;
            
        }
        cout<<endl;
    }
}
