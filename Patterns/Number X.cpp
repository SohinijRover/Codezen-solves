/*
Pattern for N = 3 (No. of rows = 5, No. of columns = 5)
1   1
 2 2
  3
 2 2
1   1
*/

void printPatt(int n)
{
    int i, j;

    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
            cout << ' ';
        cout << i;
        for(;j<2*n-i-1;j++)
            cout << ' ';
        cout << i;
        cout << endl;
    }
    for(j=1;j<i;j++)
        cout << ' ';
    cout << i-- << endl;
    
    for(;i>0;i--)
    {
        for(j=1;j<i;j++)
            cout << ' ';
        cout << i;
        for(;j<2*n-i-1;j++)
            cout << ' ';
        cout << i;
        cout << endl;
    }
}
