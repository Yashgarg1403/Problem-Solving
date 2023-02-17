#include<stdio.h>
void main(){
    for(int i=1;i<=6;i++){
        printf("%d",i);
    }
    for(int i=5;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=2*i-1;j++){
            printf(" ");
        }
        for(int j=6-i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}