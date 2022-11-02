#include<stdio.h>
#include<stdlib.h>
int ipt;
char opt[1007];
int main(){
    scanf("%d",&ipt);
    ipt/=2;
    int radix=10;
    itoa(ipt,opt,10);
    for(int i=0;opt[i];i++){
        opt[i]+='a'-'0';
    }
    printf("%d %s",ipt,opt);
    return 0;
}