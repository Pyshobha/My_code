#include<stdio.h>
int main(){
    int x;
    printf("enter the no :");
    scanf("%d",&x);
    if(x%400==0 ||(x%4==0 && x%100!=0)) // || that is a used for if one true condition will be executed
  // && that is used if one condition is false so not to be executed
    printf("%d is a leap year",x);
    else
    printf("%d is not a leap year",x);
    return 0;
}
