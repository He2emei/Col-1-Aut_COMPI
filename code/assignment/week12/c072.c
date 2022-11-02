#include<stdio.h>
#include<string.h>
char ipt[10007];
char syn;
int vis;
int main(){
    gets(ipt);
    scanf("%c",&syn);
    for(int i=0;ipt[i];i++){
        if(ipt[i]==syn){
            vis=1;
        }
    }
    if(!vis) printf("NotFound");
    else{
        for(int i=0;ipt[i];i++){
            if(ipt[i]!=syn){
                printf("%c",ipt[i]);
            }
        }
    }
    return 0;
}