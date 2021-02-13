/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
*/

#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=i;
        for(int j=0;j<=i;j++)
            cout<<++a;
        cout<<endl;
    }
}


