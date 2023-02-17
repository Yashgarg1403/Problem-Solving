#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,k,p;
    printf("enter two no.s\n");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    int m=c;
    int j=0;
    while(m!=0){
        m=m/10;
        j++;
    }
    printf("enter the value of k : ");
    scanf("%d",&k);
    if(k>j){
        printf("the value of k is more then required");
    }
    else{
    for(int i=0;i<k;i++){
        p=c%10;
        c=c/10;
    }
    printf("enter the kth digit is %d",p);
}
}