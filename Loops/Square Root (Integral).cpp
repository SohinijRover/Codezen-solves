/*
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,s;
    cin>>n;
    s = sqrt(n);
    cout<<s;
    return 0;
}
