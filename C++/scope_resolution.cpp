#include<iostream>
using namespace std;
int a=100; //global variable

int main(){
   int a,b;
   cout<<"Enter the first value"<<" ";
   cin>>a;
   cout<<"Enter the second value"<<" ";
   cin>>b;
   
   cout<<"The sum is:"<<a+b<<endl;
   cout<<"The global value a is:"<<::a; // is we can assess global variable then using :: scope resolution 
   return 0;
} 
