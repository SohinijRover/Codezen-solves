/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. 
On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
*/

#include<iostream>
using namespace std;


int main(){
    int s,e,w,c;
    cin>>s>>e>>w;
	for(int i=s;i<=e;i+=w)
    {
        c=(i-32)*5/9;
        cout<<i<<" "<<c<<endl;
    }
}


