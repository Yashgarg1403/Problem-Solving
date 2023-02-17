#include<stdio.h>
void main(){
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    char c='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",c);
        }
        c++;
        printf("\n");
    }

}