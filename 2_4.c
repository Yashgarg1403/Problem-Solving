#include<stdio.h>
void main(){
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    char c='A';
    for(char i=0;i<n;i++){
        for(char j=c;j<=c+i;j++){
            printf("%c",j);

        }
        c++;
        printf("\n");
    }

}