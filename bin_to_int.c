/*finding binary equivalent of a integer without using an array*/
#include<stdio.h>
int main(){
    int num,rem,temp,place,bin=0;
    place=1;
    printf("enter a number and it should be positive:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%2;
        bin=bin+(rem*place);
        place*=10;
         temp/=2;
        }
    printf("binary equivalent of %d is: %d\n",num,bin);
return 0;
}