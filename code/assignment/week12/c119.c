#include<stdio.h>
#include<string.h>
char ipt[10007];
int ans[10];
int main(){
    gets(ipt);
    int len=strlen(ipt);
    int cnt=0,t=0,p=0;
    for(int i=len-1;i>=0;i--){
        if(ipt[i]!='1'&&ipt[i]!='0'){
            printf("该字符串不是正确的IP地址");
            return 0;
        }
        int x=ipt[i]-'0';
        x<<=cnt; cnt++; t=x|t;
        if(cnt==8||i==0){
            cnt=0;
            ans[++p]=t;
            t=0;
        }
    }
    if(cnt){
        cnt=0;
        ans[++p]=t;
        t=0;
    }
    printf("%d.%d.%d.%d",ans[4],ans[3],ans[2],ans[1]);
    return 0;
}