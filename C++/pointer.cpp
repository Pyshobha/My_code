#include<iostream>
using namespace std;

int main(){
    // pointer is a data types which hold the address of another variable or data type
    int x=4;
    int* y=&x;
    // & -----> (Address of ) operator 
    cout<<"The address of x is :"<<&x<<endl;
    cout<<"The address of x is :"<<y<<endl;
    
    //*-----> (value at ) Dereference operaror

    cout<<"The value at address of y is :"<<*y<<endl;



    // pointer to pointer 
    int**z=&y;
    cout<<"The address of c is : "<<&y<<endl;
    cout<<"The address of c is : "<<**z<<endl;

    return 0;
}
