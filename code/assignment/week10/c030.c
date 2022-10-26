#include<stdio.h>

char ipt[1007];
int k;

int main(){
    scanf("%s",ipt);
    scanf("%d",&k);
    for(int i=0;ipt[i];i++){
        if(ipt[i]>='A'&&ipt[i]<='Z'){
            ipt[i]=(ipt[i]-'A'+k)%26+'A';
        }
        if(ipt[i]>='a'&&ipt[i]<='z'){
            ipt[i]=(ipt[i]-'a'+k)%26+'a';
        }
    }
    printf("%s",ipt);
    return 0;
}