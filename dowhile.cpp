#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"how many values you want to put"<<endl;
    cin>>n;
      int sum=0;
    
    do
    {
      
        int num;
        cout<<"enter the integer you want to add"<<endl;
        cin>>num;
        sum+=num;
        n--;
    } while (n>0);
    cout<<sum<<endl;
    
}