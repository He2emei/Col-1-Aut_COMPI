#include<stdio.h>
#include<string.h>
char ipt[10007];
int main(){
    gets(ipt);
    int begin=0,end=strlen(ipt)-1;
    while(ipt[begin]==' '){
        begin++;
    }
    while(ipt[end]==' '){
        end--;
    }
    for(int i=0;ipt[i];i++){
        if(ipt[i]==' '&&i>=begin&&i<=end) continue;
        printf("%c",ipt[i]);
    }

    return 0;
}