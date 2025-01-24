#include<iostream>
using namespace std;
int main(){
    long double a=43.5;
    cout<<sizeof(43.5f);
    cout<<endl<<int(a);
    cout<<endl<<(int)a; // both are same 

    cout<<endl<<sizeof(43.5l);

    // ****** refrence variable
    int x=7;
    int & y=x;
    cout<<endl<<x;
    cout<<endl<<y;

}
