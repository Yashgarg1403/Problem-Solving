#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=10-2*i;k++){
            printf(" ");
        }
        for(int w=i;w>=1;w--){
            printf("%d",w);
        }
        printf("\n");
    }
}