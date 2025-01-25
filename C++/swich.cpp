#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    switch(age){
        case 18:
        cout<<"you are 18"<<endl;
        break;
        case 12:
        cout<<"You are 12"<<endl;
        default:
        cout<<"no special cases are available";
    }
    return 0;
}
