#include<stdio.h>
#include<string.h>
char ipt[1007];
int t,cnt;
int main(){
    gets(ipt);
    for(t=0;ipt[t]=='*';t++){
        printf("*");
    }
    for(int i=strlen(ipt)-1;ipt[i]=='*';i--){
        cnt++;
    }
    for(int i=t;i<strlen(ipt)-cnt;i++){
        if(ipt[i]=='*') continue;
        printf("%c",ipt[i]);
    }
    for(int i=1;i<=cnt;i++){
        printf("*");
    }
    return 0;
}