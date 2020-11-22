/*
Pattern for N = 2
  0
 101
21012
*/

void printPatt(int n)
{
    int a=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
          for(int j=i;j>=0;j--)
        {
            cout<<a+j;
        }
          for(int j=1;j<=i;j++)
        {
            cout<<a+j;
        }

        cout<<endl;
    }
}
