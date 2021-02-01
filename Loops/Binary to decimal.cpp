/*
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,d=0,c=0,t;
    cin>>n;
    t=n;
    while(t!=0)
    {
        t/=10;
        c++;
    }
    for(int i=0;i<c;i++)
    {
        d = d + (pow(2,i)*(n%10));
        n /= 10;
    }
    cout<<d;
   return 0;   
}
