//Given a number N, print sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;


int main(){
	int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            sum+=i;
     }
    cout<<sum;
}


