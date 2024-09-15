#include<stdio.h>
int main()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    if((x%5==0 || x%3==0) && x%15!=0){
    printf(  "divisible by 5 or 3 and not divisible by 15");}
    else{
    printf("vdcvsh");
    return 0;}
}
