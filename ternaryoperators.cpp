#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    marks>33 ? cout<<"Pass": cout<<"Fail";//  this is ternary operator and its syntax is condition ? expression1 : expression2
    return 0;

}