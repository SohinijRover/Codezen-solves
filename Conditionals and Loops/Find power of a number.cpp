/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int x,n;
    long int p;
    cin>>x>>n;   
    p=pow(x,n);
    cout<<p;
    return 0;
	
}

/*
It can also be done without using the function but just loops.
The below code explains it
*/

//WHILE loop

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
    int exponent, base;
    long int result = 1;

    cin >> base >> exponent;
    if(base==0 && exponent==0)
    {
      cout<<1;
      exit(0);
    }
    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}

//FOR loop

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
    int exponent, base;
    long int result = 1;

    cin >> base >> exponent;
    if(base==0 && exponent==0)
    {
      cout<<1;
      exit(0);
    }

    for(int i=1; i<=exponent; i++)
    {
        result*=base;
    }
    cout << result;
    
    return 0;
}
