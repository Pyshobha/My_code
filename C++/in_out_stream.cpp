#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter the value of a"<<endl; // << Insertion operator for printing some string ,value
    cin>>a;                       // >> Extraction operator for take some input from user
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the sum is :"<<a+b;
    return 0;
}
/* input stream = direction of flow of bytes takes place from input device(for ex keyboard)
to the main memory */
/* output stream= direction of flow of bytes place from main memory to the
output device(for ex display)*/
