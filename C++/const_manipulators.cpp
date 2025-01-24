#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int a=3,b=1,c=8122;
    a=5;
    cout<<"without setw"<<a<<endl;
    cout<<"without setw"<<b<<endl;
    cout<<"without setw"<<c<<endl;
   

    cout<<"with setw"<<setw(30)<<a<<endl;
    cout<<"with setw"<<setw(70)<<b<<endl;
    cout<<"with setw "<<setw(50)<<c<<endl;

    //constant
    int const d=45;
    cout<<endl<<d;
    //d=6; //getting error because constant value we can't change

    // operator precedence
    int m=7,n=4;
    int z=(m*2)+5;
    cout<<endl<<"The value of z is :"<<z;
    int i=(((n*3)+m)-5);
    cout<<" "<<"The value of i is : "<<i;
    return 0;
}
