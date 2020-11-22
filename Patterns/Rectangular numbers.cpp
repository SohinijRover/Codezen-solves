/*
Pattern for N = 4
4444444
4333334
4322234
4321234
4322234
4333334  
4444444
*/

void printPatt(int n)
{
    int max=n, i, j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
            cout << max-(i>j?j:i);
        for(;j>=0;j--)
            cout << max-(i>j?j:i);
        cout << endl;
    }
    for(;i>=0;i--)
    {
        for(j=0;j<n-1;j++)
            cout << max-(i>j?j:i);
        for(;j>=0;j--)
            cout << max-(i>j?j:i);
        cout << endl;
    }
}
