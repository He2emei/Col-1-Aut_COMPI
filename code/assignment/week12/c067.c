#include<stdio.h>
#include<string.h>
char ipt[1007];
int main(){
    gets(ipt);
    int len=strlen(ipt);
    int cnt=len%3;
    for(int i=0;i<len;i++){
        if(i%3==cnt&&i!=0) printf(",");
        printf("%c",ipt[i]);
    }
    return 0;
}