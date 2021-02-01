/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.
*/

#include<iostream>
using namespace std;

int main() {
	int n[100],i=0,d;
    cin>>d;
     if(d==0)
        cout<<0;
    while(d!=0)
    {
        n[i++]=d%2;
        d=d/2;
    }
    for(int j=i-1;j>=0;j--)
        cout<<n[j];
  return 0; 
}
