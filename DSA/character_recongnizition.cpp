#include<iostream>
using namespace std;

int main()
{
  char ch;
  cout<<"enter your character:";
  cin >> ch;
   
   if(ch >='a' && ch <='z'){
       cout << "This is Lowercase";
   }
   else if(ch >='A' && ch <= 'Z'){
       cout << "This is Uppercase";
   }
   else{
       cout << "This is numeric";
   }
   
   return 0;


}