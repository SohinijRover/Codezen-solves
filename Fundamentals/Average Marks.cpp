/*
Write a program to input a name(as a single character) and marks of three tests as m1, m2, and m3 of a student considering all the three marks have been given in integer format.
Input format :
Line 1 : Name(Single character)
Line 2 : Marks scored in the 3 tests separated by single space. 
Output format :
First line of output prints the name of the student.
Second line of the output prints the average mark.
*/

#include<iostream>
using namespace std;


int main(){
	int a,b,c,avg;
    char name;
    cin>>name>>a>>b>>c;
    cout<<name<<endl<<(a+b+c)/3;
}
