#include<stdio.h>
#include<math.h>
void main(){
    int n,sum=0,r,k;
    printf("enter the no.\n");
    scanf("%d",&n);
    while(k!=0){
        r=k%10;
        k=k/10;
        sum=sum+r;
    }
   // printf("%d",sum);
}
