#include<stdio.h>
#include<string.h>
char ipt[1007];
int main(){
    gets(ipt);
    int len=strlen(ipt);
    for(int i=len-1;i>=0&&ipt[i]=='*';i--){
        ipt[i]=0;
    }
    int vis=0;
    for(int i=0;ipt[i];i++){
        if(vis){
            printf("%c",ipt[i]);
            continue;
        }
        if(ipt[i]!='*'){
            printf("%c",ipt[i]);
            vis=1;
        }
    }
    return 0;
}