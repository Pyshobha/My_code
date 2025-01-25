#include<iostream>
using namespace std;

int main(){
    int i=0;
    int marks[i]={67,43,87,94};
    // pointer arithmetic
    //adderss new=adderss current+i*size of(data tpe)


    int* p=marks;
    cout<<"The value of *p     :"<<*p<<endl;
    cout<<"The value of *(p+1) :"<<*(p+1)<<endl;
    cout<<"The value of *(p+2) :"<<*(p+2)<<endl;
    cout<<"The value of *(p+3) :"<<*(p+3)<<endl;
return 0;
}

