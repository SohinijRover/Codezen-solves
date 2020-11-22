/*
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
*/

#include <iostream>
using namespace std;

void printPatt(int n)
{
	int i,j;
    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
            cout << ' ';
        for(;j<n;j++)
            cout << n+j-2*i+1;
        for(;j>=i;j--)
            cout << n+j-2*i+1;
        cout << endl;
    }
}

int main() 
{

    int n;
    cin >> n;
    printPatt(n);
}
