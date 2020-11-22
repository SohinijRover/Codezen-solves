/*
Pattern for N = 3
ABCCBA
 ABBA
  AA
*/

void printPatt(int n)
{
	for(int i=0;i<n;i++)
    {
        char ch='A';
         for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<ch++;
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<--ch;
        }
        cout<<endl;
    }
}
