/*
Pattern for N = 5
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15
*/

void printPatt(int n)
{
    int a=1;
    int arr[n];
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            arr[j]=a++;
        }
        if(i%2==0)
        {
            for(int j=0;j<=i;j++)
                cout<<arr[j]<<" ";
        }
        else
        {
            for(int j=i;j>=0;j--)
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
