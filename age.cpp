#include<iostream>
using namespace std;

int main(){
    int ur_age;
    cout<<"enter your age:";
    cin>>ur_age;
    if (ur_age<12)
    {
        cout<<"You are a child";
        } else if(ur_age>=12 && ur_age<18) {
            cout<<"You are a teenager";
        } else {
            cout<<"you are Adult";
        }
        
    

    return 0;
}