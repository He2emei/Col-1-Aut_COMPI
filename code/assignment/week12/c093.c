#include<stdio.h>
#include<string.h>
char ipt[1007];
int main(){
    gets(ipt);
    int len=strlen(ipt);
    for(int i=0;i<len;i++){
        if(i%2){
            printf("%c",ipt[len-i-(len%2)]);
        }
        else{
            printf("%c",ipt[i]);
        }
    }
    return 0;
}