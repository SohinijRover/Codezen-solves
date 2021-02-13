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

int n, k = 0;
cin>>n;

    for(int i = 1; i<=n; i++){
        // spaces
        for(int j = 1; j<=n-i; j++) cout<<" ";
        
        // numbers
        
        for(int j = 1; j<=i; j++) cout<<j+k;
        
        k++;
        cout<<endl;
    }
  
}
