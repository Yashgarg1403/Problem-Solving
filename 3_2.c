#include<stdio.h>
int fact(int i){
    if(i==1){
        return 1;
    }
    return i*fact(i-1);
}
void main(){
    int n,sum=0;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        sum+=(fact(i))/i;
    }
    printf("Ans is: %d",sum);
}