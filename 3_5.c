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
    int k=1;
    for(int i=1;i<=n;i=i+2){
        if(k%2==0){
             sum-=pow(x,i)/fact(i);
        }
        else{
            sum+=pow(x,i)/fact(i);
        }
        k++;
    }
    printf("Ans is: %f",sum);
}