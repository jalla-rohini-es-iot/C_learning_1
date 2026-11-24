/*printing prime factors of a number given by the user*/
#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("invalid\n");
    }
    else{
    
    for(int i=2;i<=num;i++){
        if(num%i==0){
            printf("%d",i);
            
            num/=i;
            i=1;
            
        }
    }
}
    return 0;
}