#include<stdio.h>
#include<string.h>
char ipt[1007];
int main(){
    gets(ipt);
    int len=strlen(ipt);
    int vis=0;
    for(int i=0;i<len;i++){
        if(vis) printf(" ");
        for(int j=i+1;j>0;j--){
            printf("%c",ipt[len-j]);
        }
        vis=1;
    }
    return 0;
}