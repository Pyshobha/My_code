#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if(age>18){
        cout<<"You eligibal for vote"<<endl;
    }
    else if(age==18){
        cout<<"You are now eligible for vote"<<endl;
    }
    else{
        cout<<"You are not eligible for vote"<<endl;
    }
    return 0;
}
