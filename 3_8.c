#include<stdio.h>
#include<math.h>
void main(){
    int n;
    int sum=0;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    for(int i=1,j=1;i<=n;i++,j=j+2){
        sum+=i*(i+1)*(i+2);
    }
    printf("Ans is: %d",sum);
}