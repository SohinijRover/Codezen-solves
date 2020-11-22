/*
Print the following pattern for the given number of rows.
Assume N is always odd.
Note : There is space after every star.
Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*
*/

#include<iostream>
using namespace std;

void printPatt(int n)
{
    int i, j;
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<i;j++)
            cout << ' ';
        for(j=0;j<=i;j++)
            cout << "* ";
        cout << endl;
    }
    for(;i>=0;i--)
    {
        for(j=0;j<i;j++)
            cout << ' ';
        for(j=0;j<=i;j++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPatt(n);
}
