#include<stdio.h>
char ipt[1007];
int main(){
    gets(ipt);
    for(int i=0;ipt[i];i++){
        if(ipt[i]>='a'&&ipt[i]<='z'){
            printf("%c",ipt[i]);
        }
    }
    return 0;
}