/*
Print the following pattern for the given number of rows.
Pattern for N = 5
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
 */
 
 #include<iostream>
using namespace std;

void printPattern(int n)
{
	int A = 1;
	for(int i=1;i<=n;i++)
    {
		for(int j=A;j<A+n;j++)
			cout << j << " ";
	cout << endl;
		if(i==(n+1)/2)
			if(n&1)
				A=n*(n-2)+1;
			else
				A=n*(n-1)+1;
		else if(i>(n+1)/2)
			A-=2*n;
		else
			A+=2*n;
	}
}
