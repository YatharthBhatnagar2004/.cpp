#include<iostream>
 using namespace std;
 
 int main(){

    int n;
    cin>>n;
     
    int newnum=0;

    while (n>0)
    {
     
     int add=n%10;
      
      newnum = newnum*10 + add;

      n=n/10;
      
      
    }
    cout<<newnum<<endl;


    return 0;
    
 }