/*printing all even and odd numbers of certain range as indicated by the user*/
#include<stdio.h>
int main()
{
    int min;
    int max;
    int even;
    int odd;
    printf("enter minimum range:");
    scanf("%d",&min);
    printf("enter maximum range:");
    scanf("%d",&max);
    printf("even numbers\n");
    for(int i=min;i<=max;i++){
        
        if(i%2==0){
            printf("%d\n",i);

        }
    
    }
    printf("odd numbers\n");
    for(int i=min;i<=max;i++){
        
        if(i%2!=0){
            printf("%d\n",i);

        }
    }
    return 0;
}