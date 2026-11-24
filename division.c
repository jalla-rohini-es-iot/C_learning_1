/*finding quotient without using / operator*/
#include<stdio.h>
int main(){
int divi;
int div;
int quo=0;
printf("enter dividend:");
scanf("%d",&divi);
printf("enter divisor");
scanf("%d",&div);
for(int i=div;i<=divi;i+=div){
    quo++;
}
printf("%d",quo);
return 0;
}