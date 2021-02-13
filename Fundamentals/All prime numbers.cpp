/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
*/

#include <iostream>

using namespace std;

int main() {

    int num, i, upto;
    cin >> upto;
if(upto>1)
{
cout<<2<<endl;
    for(num = 2; num <=upto; num++) {

        for(i = 2; i <=num/2; i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        if(i != num) {
            cout << num <<endl;
        }
    }
}
    return 0;
}
