/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format : Integer x
Output format : Terms of series (separated by space)
*/

#include<iostream>
using namespace std;

int main() {

    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if((3*i + 2) %4 ==0)
            x++;
        else
            cout<<(3*i + 2)<<" ";
    }
    return 0;
}
