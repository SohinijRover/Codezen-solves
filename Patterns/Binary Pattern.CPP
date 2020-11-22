/*
Pattern for N = 4
1111
000
11
0
*/


void printPatt(int n)
{
        for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(i%2==0)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}
