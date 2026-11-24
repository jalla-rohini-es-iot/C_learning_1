/* to check whether a number is power of 2 or not*/
#include<stdio.h>
int main(){
    int num;
    int ispower=1;
    printf("enter a number:");
    scanf("%d",&num);
    int temp=num;
    if(num<=0){
        ispower=0;
    }
    else{
        while(temp>1){
            if(temp%2!=0){
                ispower=0;
                break;
            }
            temp/=2;
        }
    }
    if(ispower==1){
        printf("yes!!!it is a power of 2\n");
    }
    else{
        printf("no!... it is not a power of 2\n");
    }
    return 0;
}