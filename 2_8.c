#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k>=3-2*i;k--){
            printf("*");
        }
        printf("\n");
    }
}