#include<stdio.h>
#include<string.h>

char ipt[1007];

int main(){
    gets(ipt);
    int len=strlen(ipt);
    for(int i=0;i<=len-3;i++){
        if(ipt[i]==ipt[len-1]){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}