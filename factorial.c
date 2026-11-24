/*printing factorial n!=n*(n-1)!.....*3*2*1*/
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fact*=i;
    
    printf("the factorial is :%d",fact);
    }
    return 0;
}