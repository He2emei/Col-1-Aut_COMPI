#include<stdio.h>
#include<string.h>
char ipt[1007],syn[1007];
int main(){
    scanf("%s%s",ipt,syn);
    int synlen=strlen(syn),iptlen=strlen(ipt);
    int ans=0;
    char *x=ipt;
    while(strstr(x,syn)!=NULL){
        x=strstr(x,syn)+1;
        ans++;
    }
    printf("%d",ans);
    return 0;
}