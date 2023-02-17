#include<stdio.h>
#include<math.h>
float fact(int i){
    if(i==1||i==0){
        return 1;
    }
    return i*fact(i-1);
}
void main(){
    int n;
    float sum=0;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    for(int i=1,j=1;i<=n;i++,j=j+2){
        if(i%2!=0){
            sum+=i/fact(j);
        }
        else{
            sum-=i/fact(j);
        }
    }
    printf("Ans is: %f",sum);
}