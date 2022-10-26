#include<stdio.h>
#include<string.h>

char str[1007];
int k;

int main(){
    scanf("%s",str);
    scanf("%d",&k);
    int t=-1;
    for(int i=0;str[i];i++){
        if(str[i]!='*') t=i;
    }
    int len=strlen(str);
    for(int j=1;j<len-t-k;j++){
        str[len-j]=0;
    }
    printf("%s",str);
    return 0;
}