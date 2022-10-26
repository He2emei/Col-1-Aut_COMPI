#include<stdio.h>

char ipt[1000];
int main(){
    scanf("%s",ipt);
    int t=0;
    while(ipt[t]=='*'){
        t++;
    }
    printf("%s",ipt+t);
    for(t;t>0;t--){
        printf("*");
    }
    return 0;
}