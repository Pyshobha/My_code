#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if((age>0)&&(age<6)){
        cout<<"Small child"<<endl;

    }
    else if ((age>5)&&(age<11))
    {
        cout<<"baby child"<<endl;
    }
    else if((age>10)&&(age<18))
    {
        cout<<"Big child";
    }
    else if(age<1){
        cout<<"Not born";
    }
    else{
        cout<<endl<<"young adult";
    }
    return 0;
}
    
