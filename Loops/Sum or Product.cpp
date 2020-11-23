/*
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
*/

#include<iostream>
using namespace std;

int main() {

    int n,c,sum=0,prod=1;
    cin>>n;
    cin>>c;
    if(n>0 && n<13)
    {
        if(c==1)
        {
            for(int i=1;i<=n;i++)
            {
                sum += i;
            }
            cout<<sum;
        }
        else if(c==2)
        {
            for(int i=1;i<=n;i++)
            {
                prod *=i;
            }
            cout<<prod;
        }
        else
        	cout<<"-1";
    }
    return 0;
}	
