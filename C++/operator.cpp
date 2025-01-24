#include<iostream>
using namespace std;
int main(){
    // operator in c++
    // 1. Arithmetic operator
    int a=5,b=3;
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<endl;

    // 2 Assignment operator
    char ch='A';

    // 3 Comparison operator
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<endl;
    // 4 logical operator
    cout<<"The value of (a<b)&&(a==b) is :"<<((a<b)&&(a==b))<<endl;
    cout<<"The value of (a>b)&&(a==b) is :"<<((a>b)||(a==b))<<endl;
    cout<<"The value of !(a<b)&&(a==b) is :"<<!((a<b)&&(a==b))<<endl;
}
