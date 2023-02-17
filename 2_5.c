#include<stdio.h>
void main(){
     char c='E';
    for(int i=1;i<=5;i++){
        for(char j=c;j<='E';j++){
            printf("%c ",j);
        }
        c--;
        printf("\n");
    }
}