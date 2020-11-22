/*
Pattern for N = 7
*
**
***
****
***
**
*
*/

void printPatt(int n)
{
    int i;
   
    for(i=1;i<=n/2;i++){
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
    for(;i>0;i--){
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
}

/*
OR YOU CAN WRITE THIS:

void printPatt(int n)
{
    if(n%2==0)
    {
    	for(int i=0;i<=n/2;i++)
        {
        	for(int j=0;j<=i;j++)
        	{
            	cout<<"*";
        	}
        	cout<<endl;
    	}
    	for(int i=n/2;i<=n;i++)
    	{
        	for(int j=i;j<n;j++)
        	{
            	cout<<"*";
        	}
        	cout<<endl;
    	}
    }
    else
    {
    	for(int i=0;i<n/2;i++)
        {
        	for(int j=0;j<=i;j++)
        	{
            	cout<<"*";
        	}
        	cout<<endl;
    	}
    	for(int i=n/2;i<=n;i++)
    	{
        	for(int j=i;j<n;j++)
        	{
            	cout<<"*";
        	}
        	cout<<endl;
    	}
    }
        
}
*/
