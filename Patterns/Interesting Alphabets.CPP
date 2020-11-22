/*
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;


int main() {
    int m,n;
    cin>>n;
   	for(int i=0;i<=n;i++)
    {
        char ch = 'A'+ (n-i);
        for(int j=0;j<i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    } 
}
