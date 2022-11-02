#include<stdio.h>
char ipt[1007];
int vis[1007];
int main(){
    gets(ipt);
    for(int i=0;ipt[i];i++){
        if(!vis[ipt[i]]){
            printf("%c",ipt[i]);
            vis[ipt[i]]=1;
        }
    }
    return 0;
}