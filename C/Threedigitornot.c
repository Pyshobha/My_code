#include<stdio.h>
int main()
    {
    int x;
    printf("enter the no. :");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("no is three digit");
    }
    else{
        printf("not three digit ");
    }
    return 0;
    }
