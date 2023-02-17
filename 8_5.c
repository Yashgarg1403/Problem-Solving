#include<stdio.h>
void main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);  
    int a[n];
    for(int i=2;i<=n;i++){
        a[i]=0;
    }
     for(int i=2;i<=n;i++){
        if(a[i]==0){
            a[i]=i;
        }
        for(int j=i+1;j<=n;j++){
            if(a[j]==0){
            if(j%i==0){
                a[j]=i;
            }}
        }
    }
        printf("the least prime factor of 1 is 1\n");
        for(int i=2;i<=n;i++){
        printf("the least prime factor of %d is %d\n",i,a[i]);
    }
}