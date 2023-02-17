#include<stdio.h>
#include<math.h>
int fact(int i){
    if(i==1||i==0){
        return 1;
    }
    return i*fact(i-1);
}
void main(){
    int n,x;
    float sum=0;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    printf("Enter value of x:\n");
    scanf("%d",&x);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum+=pow(x,i)/fact(i);
        }
        else{
            sum-=pow(x,i)/fact(i);
        }
    }
    printf("Ans is: %f",sum);
}