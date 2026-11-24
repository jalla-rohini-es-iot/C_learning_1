/*checking leap year or not using conditional operator*/
#include<stdio.h>
int main(){
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    ((year%400==0)||((year%4==0)&&(year%100!=0)))? printf("%d is the leap year.\n",year): printf("%d is not a leap year.\n",year);
    return 0;
}