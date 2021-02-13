/*
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1
*/

// C++ program to check if x is a perfect square 
#include <iostream> 
#include <math.h> 
using namespace std; 

// A utility function that returns true if x is perfect square 
bool isPerfectSquare(int x) 
{ 
	int s = sqrt(x); 
	return (s*s == x); 
} 

// Returns true if n is a Fibinacci Number, else false 
bool isFibonacci(int n) 
{ 
	// n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
	// is a perferct square 
	return isPerfectSquare(5*n*n + 4) || 
		isPerfectSquare(5*n*n - 4); 
} 

// A utility function to test above functions 
int main() 
{ 
for (int i = 1; i <= 10; i++) 
	isFibonacci(i)? cout << i << " is a Fibonacci Number \n": 
					cout << i << " is a not Fibonacci Number \n" ; 
return 0; 
} 
