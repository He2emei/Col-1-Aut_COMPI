#include<stdio.h>
int ipt;
int main(){
    scanf("%d",&ipt);
    int t=0;
    while(ipt){
        t+=ipt%10;
        ipt/=10;
    }
    printf("%d",t%2);
    return 0;
}