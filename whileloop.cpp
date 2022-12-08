#include<iostream>
using namespace std;

int main(){
    
    int n;
    int sum=0;
    int i=1; //loop variable
     cout<<"enter the value of n:";
     cin>>n;

     while (i<=n) //condition
     {
        sum+=i;
        i++; //updating loop variable
     }
     
     cout<<sum;

    }
    


