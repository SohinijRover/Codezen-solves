/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/

#include<iostream>
#include<ctype.h>
using namespace std;

int main() {
	char ch;
    cin>>ch;
    if(isupper(ch))
        cout<<1;
    else if(islower(ch))
        cout<<0;
    else
        cout<<-1;
}
