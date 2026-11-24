/* finding the GCD of two numbers */
#include<stdio.h>
int main(){
    int num1,num2,temp1,temp2,rem;
    printf("enter number 1: ");
    scanf("%d",&num1);
    printf("enter number 2: ");
    scanf("%d",&num2);
        if(num1>num2){
            temp1=num1;
            temp2=num2;}
        else{
            temp1=num2;
            temp2=num1;
        }
        while(temp2!=0){
            rem=temp1%temp2;
            temp1=temp2;
            temp2=rem;

            
        }
    printf("the gcd is: %d",temp1);
    return 0;
}
