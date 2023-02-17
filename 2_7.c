#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>=1;j--){
            printf(" ");
        }
        for(int z=i;z>=1;z--){
            printf("%d",z);
        }
        for(int w=2;w<=i;w++){
            printf("%d",w);

        }
        printf("\n");
    }
}