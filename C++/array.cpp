#include<iostream>
using namespace std;

int main(){
    int i=0;
    int marks[i]={67,43,87,94};
    
    marks[0]=76;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;



    //***** using while loop
    // while(i<=3){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    //***** using do while loop
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
        
    // } while (i<=3);
    
    return 0;
}
