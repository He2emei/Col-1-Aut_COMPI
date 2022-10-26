#include<stdio.h>
int ipt;

int main(){
    scanf("%d",&ipt);
    printf("1");
    for(int i=2;i<=ipt;i++){
        while(ipt%i==0){
            printf("*%d",i);
            ipt/=i;
        }
    }
    return 0;
}