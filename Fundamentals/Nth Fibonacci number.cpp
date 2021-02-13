/*
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
*/

#include<iostream>
using namespace std;
 
int fib(int n) 
{ 
   if (n <= 1) 
      return n; 
   return (fib(n-1) + fib(n-2)); 
} 
  
int main () 
{ 
  int n;
    cin>>n;
  cout<<fib(n); 

  return 0; 
} 
